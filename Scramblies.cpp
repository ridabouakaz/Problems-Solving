#include<iostream>
#include <string>
#include<vector>
using namespace std;
bool scramble(const string& s1, const string& s2) {
    vector<int> charCount(26, 0);
    for (char c : s1) {
        charCount[c - 'a']++;
    }
    for (char c : s2) {
        if (charCount[c - 'a'] == 0) {
            return false;
        }
        charCount[c - 'a']--;
    }

    return true;
}
int main()
{
    cout << scramble("javscripts", "javascript");
    return 0;
}
/*Description:

Complete the function scramble(str1, str2) that returns true if a portion of str1 characters can be rearranged to match str2,
otherwise returns false.

Notes:

    Only lower case letters will be used (a-z). No punctuation or digits will be included.
    Performance needs to be considered.

Examples

scramble('rkqodlw', 'world') ==> True
scramble('cedewaraaossoqqyt', 'codewars') ==> True
scramble('katas', 'steak') ==> False

Strings
Performance
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