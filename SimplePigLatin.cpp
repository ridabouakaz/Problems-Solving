#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <sstream>
#include <climits>
#include<iomanip>
/*   */
using namespace std;
string pig_it(string str) {
    string result;
    string temp;
    for (int i = 0; i < str.size(); i++)
    {
        if (isalpha(str[i]))
        {
            temp += str[i];
        }
        else
        {
            if (!(temp.empty()))
            {
                if (temp.size() > 1) {
                    result += temp.substr(1) + temp[0] + "ay";
                }
                else
                {
                    result += temp + "ay";
                }
                temp.clear();
            }
            result += str[i];
        }
    }
    if (!(temp.empty()))
    {
        if (temp.size() > 1) {
            result += temp.substr(1) + temp[0] + "ay";
        }
        else
        {
            result += temp + "ay";
        }
        temp.clear();
    }    return result;
}
int main()
{

    cout << pig_it("This is my string");
    return 0;
}
/*Description:

Move the first letter of each word to the end of it,
then add "ay" to the end of the word. Leave punctuation marks untouched.
Examples

pigIt('Pig latin is cool'); // igPay atinlay siay oolcay
pigIt('Hello world !');     // elloHay orldway !

Regular Expressions
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