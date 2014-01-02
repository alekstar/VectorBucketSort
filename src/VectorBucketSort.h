#ifndef VECTORBUCKETSORT_H
#define	VECTORBUCKETSORT_H

#include <vector>
using std::vector;
using std::size_t;

#include <gtest/gtest_prod.h>

class VectorBucketSort
{
    FRIEND_TEST(VectorBucketSort, GetBucketsVector);
    FRIEND_TEST(VectorBucketSort, PutNumbersIntoBucketsCase1);
    FRIEND_TEST(VectorBucketSort, PutNumbersIntoBucketsCase2);
    FRIEND_TEST(VectorBucketSort, PutNumbersBackIntoDataVectorCase1);
public:
    static void sort(vector<unsigned int>& data);
private:
    static vector<vector<unsigned int> >* getBucketsVector();
    static bool putNumbersIntoBuckets(vector<vector<unsigned int> > *buckets, 
                                      vector<unsigned int> &data,
                                      unsigned int digit_in_number);
    static void putNumbersBackIntoDataVector(
        vector<vector<unsigned int> > *buckets,
        vector<unsigned int> &data);
};

#endif	/* VECTORBUCKETSORT_H */

