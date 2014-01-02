Class VectorBucketSort is a realization of bucket sort for unsigned int vector.

Made by excercise 19.7 in Deitel's book "C++ How To Program", 5/e

Algorythm:

There is a data-vector and "buckets" vector, where each "bucket" is a vector too. There is ten "buckets with numbers (indexes) from 0 to 9.

1. Take each number in data-vector and put it in "bucket", where index equals first (right) digit in number. This number is  poped back from vector and pushed back to bucket.

2. Fill back data-vector from "buckets" by sequentially poping back numbers from each "bucket" and pushing back it to vector.

3. Do 1-st step, but each time increment digit number then do 2-nd step.

4. Do 3-rd step till after it there will be only one bucket with index 0 filled with numbers. Then make step 2 and the data-vector will be sorted.

Dependencies:
- google test v.1.7.0 (https://code.google.com/p/googletest/downloads/detail?name=gtest-1.7.0.zip)
- My VectorService library (repo: https://github.com/alekstar/VectorService)

Author of code: Aleksandr Tarasenko <inet.tarasenko@gmail.com>
Repository URL: https://github.com/alekstar/VectorBucketSort
