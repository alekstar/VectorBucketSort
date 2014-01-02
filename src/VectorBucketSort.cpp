#include "VectorBucketSort.h"
#include "MathService.h"
#include <cmath>
#include <vector>
using std::vector;
using std::size_t;

void VectorBucketSort::sort(vector<unsigned int>& data)
{
    vector<vector<unsigned int> >* buckets = getBucketsVector();
    
    bool was_insert_to_bucket = true;
    unsigned int digit_in_number = 1;
    while (was_insert_to_bucket)
    {
        was_insert_to_bucket = putNumbersIntoBuckets(buckets, 
                                                     data, 
                                                     digit_in_number);
        putNumbersBackIntoDataVector(buckets, data);
        ++digit_in_number;
    }
    
    delete buckets;
}

vector<vector<unsigned int> >* VectorBucketSort::getBucketsVector()
{
    vector<vector<unsigned int> >* pointer_to_buckets = 
        new vector<vector<unsigned int> >;
    const vector<unsigned int> empty_vector;
    for (int i = 0; i < 10; i++)
    {
        pointer_to_buckets->push_back(empty_vector);
    }
    return pointer_to_buckets;
}

bool VectorBucketSort::putNumbersIntoBuckets(
        vector<vector<unsigned int> > *buckets, 
        vector<unsigned int>& data, 
        unsigned int digit_in_number)
{
    bool digit_was_not_only_zero = false;
    while(data.size() > 0)
    {
        unsigned int digit = 
                MathService::getDigitOfNumber(data.back(), digit_in_number);
        if(digit != 0)
        {
            digit_was_not_only_zero = true;
        }
        buckets->at(digit).push_back(data.back());
        data.pop_back();
    }
    return digit_was_not_only_zero;
}

void VectorBucketSort::putNumbersBackIntoDataVector(
        vector<vector<unsigned int> >* buckets, 
        vector<unsigned int>& data)
{
    for(int i = 0; i < 10; ++i)
    {
        while(not buckets->at(i).empty())
        {
            data.push_back(buckets->at(i).back());
            buckets->at(i).pop_back();
        }
    }
}
