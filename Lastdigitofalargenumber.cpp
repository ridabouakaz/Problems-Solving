#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <string_view>
using namespace std;
int last_digit(const string& str1, const string& str2) {
    int last_digit_a = str1.back() - '0';
    if (str2 == "0") {
        return 1;
    }
    vector<vector<int>> cycles = {
        {0},{1},{2, 4, 8, 6},{ 3, 9, 7, 1 },{4, 6},{5},{6},{7, 9, 3, 1},{8, 4, 2, 6}, {9, 1}
    };
    const vector<int>& cycle = cycles[last_digit_a];
    int cycle_length = cycle.size();
    int exp_mod = 0;
    for (char digit : str2) {
        exp_mod = (exp_mod * 10 + (digit - '0')) % cycle_length;
    }
    exp_mod = (exp_mod == 0) ? cycle_length - 1 : exp_mod - 1;
    return cycle[exp_mod];
}
int main()
{
    cout << last_digit("10", "10000000000");     // 3    return 0;
}
/*Description:

Define a function that takes in two non-negative integers aaa and bbb and returns the last decimal digit of aba^bab.
Note that aaa and bbb may be very large!

For example, the last decimal digit of 979^797 is 999, since 97=47829699^7 = 478296997=4782969.
The last decimal digit of (2200)2300({2^{200}})^{2^{300}}(2200)2300, which has over 109210^{92}1092 decimal digits, is 666. Also,
please take 000^000 to be 111.

You may assume that the input will always be valid.
Examples

last_digit("4", "1")            // returns 4
last_digit("4", "2")            // returns 6
last_digit("9", "7")            // returns 9
last_digit("10","10000000000")  // returns 0

Remarks
C++, R, PureScript, COBOL
Algorithms
Mathematics*/
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