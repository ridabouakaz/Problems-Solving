#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <sstream>
#include <climits>
#include<iomanip>
using namespace std;
string remove_parentheses(const string& str) {
    string result;
    int count = 0;
    for (char c : str) {
        if (c == '(') {
            count++;
        }
        else if (c == ')') {
            if (count > 0) {
                count--;
            }
        }
        else if (count == 0) {
            result += c;
        }
    }
    return result;
}
int main()
{
    cout << remove_parentheses("example(unwanted thing)example");
    return 0;
}
/*Description:
Remove the parentheses

In this kata you are given a string for example:

"example(unwanted thing)example"

Your task is to remove everything inside the parentheses as well as the parentheses themselves.

The example above would return:

"exampleexample"

Notes

    Other than parentheses only letters and spaces can occur in the string.
    Don't worry about other brackets like "[]" and "{}" as these will never appear.
    There can be multiple parentheses.
    The parentheses can be nested.

Strings
Algorithms
Regular Expressions
Fundamentals*/
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