#include <gtest/gtest.h>

#include <vector>
using std::vector;

#include "../src/VectorBucketSort.h"

TEST(VectorBucketSort, GetBucketsVector)
{
    vector<vector<unsigned int> >* buckets = 
        VectorBucketSort::getBucketsVector();

    EXPECT_EQ(0, buckets->at(0).size());
    EXPECT_EQ(0, buckets->at(1).size());
    EXPECT_EQ(0, buckets->at(2).size());
    EXPECT_EQ(0, buckets->at(3).size());
    EXPECT_EQ(0, buckets->at(4).size());
    EXPECT_EQ(0, buckets->at(5).size());
    EXPECT_EQ(0, buckets->at(6).size());
    EXPECT_EQ(0, buckets->at(7).size());
    EXPECT_EQ(0, buckets->at(8).size());
    EXPECT_EQ(0, buckets->at(9).size());
    delete buckets;
}

TEST(VectorBucketSort, PutNumbersIntoBucketsCase1)
{
    vector<vector<unsigned int> >* buckets = 
        VectorBucketSort::getBucketsVector();
    vector<unsigned int> data;
    data.push_back(5);
    data.push_back(1);
    data.push_back(3);
    data.push_back(2);
    bool were_moves = VectorBucketSort::putNumbersIntoBuckets(buckets, data, 1);
    EXPECT_EQ(true, data.empty());
    EXPECT_EQ(1, buckets->at(1).at(0));
    EXPECT_EQ(2, buckets->at(2).at(0));
    EXPECT_EQ(3, buckets->at(3).at(0));
    EXPECT_EQ(5, buckets->at(5).at(0));
    EXPECT_EQ(true, buckets->at(4).empty());
    EXPECT_EQ(true, buckets->at(6).empty());
    EXPECT_EQ(true, buckets->at(7).empty());
    EXPECT_EQ(true, buckets->at(8).empty());
    EXPECT_EQ(true, buckets->at(9).empty());
    EXPECT_EQ(true, buckets->at(0).empty());
    EXPECT_EQ(true, data.empty());
    EXPECT_EQ(true, were_moves);
    delete buckets;
}

TEST(VectorBucketSort, PutNumbersIntoBucketsCase2)
{
    vector<vector<unsigned int> >* buckets = 
        VectorBucketSort::getBucketsVector();
    vector<unsigned int> data;
    data.push_back(5);
    data.push_back(1);
    data.push_back(3);
    data.push_back(2);
    bool were_moves = VectorBucketSort::putNumbersIntoBuckets(buckets, data, 2);
    EXPECT_EQ(true, data.empty());
    EXPECT_EQ(2, buckets->at(0).at(0));
    EXPECT_EQ(3, buckets->at(0).at(1));
    EXPECT_EQ(1, buckets->at(0).at(2));
    EXPECT_EQ(5, buckets->at(0).at(3));
    EXPECT_EQ(true, buckets->at(1).empty());
    EXPECT_EQ(true, buckets->at(2).empty());
    EXPECT_EQ(true, buckets->at(3).empty());
    EXPECT_EQ(true, buckets->at(4).empty());
    EXPECT_EQ(true, buckets->at(5).empty());
    EXPECT_EQ(true, buckets->at(6).empty());
    EXPECT_EQ(true, buckets->at(7).empty());
    EXPECT_EQ(true, buckets->at(8).empty());
    EXPECT_EQ(true, buckets->at(9).empty());
    EXPECT_EQ(true, data.empty());
    EXPECT_FALSE(were_moves);
    delete buckets;
}

TEST(VectorBucketSort, PutNumbersBackIntoDataVectorCase1)
{       
    vector<vector<unsigned int> >* buckets = 
        VectorBucketSort::getBucketsVector();
    vector<unsigned int> data;
    data.push_back(5);
    data.push_back(1);
    data.push_back(3);
    data.push_back(2);
    VectorBucketSort::putNumbersIntoBuckets(buckets, data, 1);
    VectorBucketSort::putNumbersBackIntoDataVector(buckets, data);
    EXPECT_EQ(1, data.at(0));
    EXPECT_EQ(2, data.at(1));
    EXPECT_EQ(3, data.at(2));
    EXPECT_EQ(5, data.at(3));
    EXPECT_EQ(true, buckets->at(0).empty());
    EXPECT_EQ(true, buckets->at(1).empty());
    EXPECT_EQ(true, buckets->at(2).empty());
    EXPECT_EQ(true, buckets->at(3).empty());
    EXPECT_EQ(true, buckets->at(4).empty());
    EXPECT_EQ(true, buckets->at(5).empty());
    EXPECT_EQ(true, buckets->at(6).empty());
    EXPECT_EQ(true, buckets->at(7).empty());
    EXPECT_EQ(true, buckets->at(8).empty());
    EXPECT_EQ(true, buckets->at(9).empty());
    EXPECT_EQ(true, buckets->at(0).empty());
    delete buckets;
}

TEST(VectorBucketSort, SortCase1)
{
    vector<unsigned int> data;
    data.push_back(5);
    data.push_back(1);
    data.push_back(3);
    data.push_back(2);
    VectorBucketSort::sort(data);
    EXPECT_EQ(1, data.at(0));
    EXPECT_EQ(2, data.at(1));
    EXPECT_EQ(3, data.at(2));
    EXPECT_EQ(5, data.at(3));
}

TEST(VectorBucketSort, SortCase2)
{
    const int SIZE = 16;
    unsigned int elements[SIZE] = {14, 155, 23, 14, 756, 123, 1, 124, 
                                   2, 3, 87, 90, 0, 543, 342, 1234};
    vector<unsigned int> data (elements, elements + SIZE);
    VectorBucketSort::sort(data);
    EXPECT_EQ(0, data.at(0));
    EXPECT_EQ(1, data.at(1));
    EXPECT_EQ(2, data.at(2));
    EXPECT_EQ(3, data.at(3));
    EXPECT_EQ(14, data.at(4));
    EXPECT_EQ(14, data.at(5));
    EXPECT_EQ(23, data.at(6));
    EXPECT_EQ(87, data.at(7));
    EXPECT_EQ(90, data.at(8));
    EXPECT_EQ(123, data.at(9));
    EXPECT_EQ(124, data.at(10));
    EXPECT_EQ(155, data.at(11));
    EXPECT_EQ(342, data.at(12));
    EXPECT_EQ(543, data.at(13));
    EXPECT_EQ(756, data.at(14));
    EXPECT_EQ(1234, data.at(15));
}

TEST(VectorBucketSort, SortEmptyVector)
{
    vector<unsigned int> data;
    VectorBucketSort::sort(data);
    EXPECT_TRUE(data.empty());
}

TEST(VectorBucketSort, SortVectorWithOneElement)
{
    vector<unsigned int> data;
    data.push_back(1234);
    VectorBucketSort::sort(data);
    EXPECT_EQ(1234, data.at(0));
    EXPECT_EQ(1, data.size());
}
