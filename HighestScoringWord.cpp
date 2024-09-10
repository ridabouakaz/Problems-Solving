#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <sstream>
#include <climits>
using namespace std;
string highestScoringWord(const string& str) {
    string result;
    string temp;
    int resulttemps = 0;
    int flage = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] != ' ')
        {
            resulttemps += str[i] - 'a' + 1;
            temp += str[i];
        }
        else
        {
            if (resulttemps > flage)
            {
                flage = resulttemps;
                resulttemps = 0;
                result = temp;
            }
            temp.clear();
            resulttemps = 0;
        }
    }
    if (resulttemps > flage)
    {
        result = temp;
        temp.clear();
    }
    return result;
}
int main()
{
    cout << highestScoringWord("aa b");
    return 0;
}
/*Description:

Given a string of words, you need to find the highest scoring word.

Each letter of a word scores points according to its position in the alphabet : a = 1, b = 2, c = 3 etc.

For example, the score of abad is 8 (1 + 2 + 1 + 4).

You need to return the highest scoring word as a string.

If two words score the same, return the word that appears earliest in the original string.

All letters will be lowercase and all inputs will be valid.
Fundamentals
Strings
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