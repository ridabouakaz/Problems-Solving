#include<iostream>
#include <string>
using namespace std;
string rot13(string msg)
{
    string result;
    for (int i = 0; i < msg.size(); i++)
    {
        char c = msg[i];
        if (isalpha(msg[i]))
        {
            if (isupper(msg[i]))
            {
                result[i] = (c - 'A' + 13) % 26 + 'A';
            }
            else
            {
                if (msg[i] > 'm')
                {
                    result += msg[i] - 13;
                }
                else
                {
                    result += msg[i] + 13;
                }
            }

        }
        else
        {
            result += msg[i];
        }
    }

    return result;
}
int main()
{
    cout << rot13("AbCd");
    return 0;
}
/*Description:

ROT13 is a simple letter substitution cipher that replaces a letter with the letter 13 letters after it in the alphabet.
ROT13 is an example of the Caesar cipher.

Create a function that takes a string and returns the string ciphered with Rot13.
If there are numbers or special characters included in the string, they should be returned as they are.
Only letters from the latin/english alphabet should be shifted, like in the original Rot13 "implementation".
Ciphers
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