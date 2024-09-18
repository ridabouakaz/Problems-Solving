#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <sstream>
#include <climits>
#include<iomanip>
using namespace std;
unsigned hamming(const string& a, const string& b) {
    unsigned result = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] != b[i])
        {
            result++;
        }
    }
    return result;
}
int main()
{
    cout << hamming("", "");
    return 0;
}
/*Description:

The Hamming Distance is a measure of similarity between two strings of equal length.
Complete the function so that it returns the number of positions where the input strings do not match.
Examples:

a = "I like turtles"
b = "I like turkeys"
Result: 3

a = "Hello World"
b = "Hello World"
Result: 0

a = "espresso"
b = "Expresso"
Result: 2

You can assume that the two inputs are ASCII strings of equal length.
Algorithms*/
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