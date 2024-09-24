#include<iostream>
#include <string>
#include<vector>
using namespace std;
float find_uniq(const vector<float>& v)
{
    float common, unique;
    if (v[0] == v[1]) {
        common = v[0];
    }
    else if (v[0] == v[2]) {
        common = v[0];
    }
    else {
        return v[0];
    }
    for (float num : v) {
        if (num != common) {
            return num;
        }
    }
    return -1;
}
int main()
{
    cout << find_uniq({ 1, 1, 1, 2, 1, 1 });
    return 0;
}
/*Description:

There is an array with some numbers. All numbers are equal except for one. Try to find it!

find_uniq(std::vector<float>{1, 1, 1, 2, 1, 1});  // --> 2
find_uniq(std::vector<float>{0, 0, 0.55, 0, 0});  // --> 0.55

It’s guaranteed that array contains at least 3 numbers.

The tests contain some very huge arrays, so think about performance.

This is the first kata in series:

    Find the unique number (this kata)
    Find the unique string
    Find The Unique

Fundamentals
Algorithms
Arrays*/
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