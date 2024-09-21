#include<iostream>
#include <string>
#include<vector>
using namespace std;
int maxSequence(const vector<int>& arr) {
    int max_so_far = 0;
    int current_max = 0;

    for (int i = 0; i < arr.size(); ++i) {
        current_max = current_max + arr[i];

        if (current_max < 0) {
            current_max = 0;
        }

        if (current_max > max_so_far) {
            max_so_far = current_max;
        }
    }

    return max_so_far;
}
int main()
{
    cout << maxSequence({ -2, 1, -3, 4, -1, 2, 1, -5, 4 });
    return 0;
}
/*Description:

The maximum sum subarray problem consists in finding the maximum
sum of a contiguous subsequence in an array or list of integers:

maxSequence({-2, 1, -3, 4, -1, 2, 1, -5, 4});
//should be 6: {4, -1, 2, 1}

Easy case is when the list is made up of only positive numbers and the maximum sum is the sum of the whole array.
If the list is made up of only negative numbers, return 0 instead.

Empty list is considered to have zero greatest sum.
Note that the empty list or array is also a valid sublist/subarray.
Algorithms
Lists
Dynamic Programming
Fundamentals
Performance*/
//          ／＞　　フ
//　　　　　| 　n　n 彡
//　 　　　／`ミ＿xノ
//　　 　 /　　　 　 |
//　　　 /　 ヽ　　 ﾉ
//　 　 │　　|　|　|
//　／￣|　　 |　|　|
//　| (￣ヽ＿_ヽ_)__)
//　＼二つ
// ITS CAT FOR YOU