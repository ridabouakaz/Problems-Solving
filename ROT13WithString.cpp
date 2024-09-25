#include <iostream>
#include <string>
using namespace std;
string rot13(const string& str) {
    string result;
    for (char c : str) {
        if (isalpha(c)) {
            if (isupper(c)) {
                result += (c - 'A' + 13) % 26 + 'A';
            }
            else {
                result += (c - 'a' + 13) % 26 + 'a';
            }
        }
        else {
            result += c;
        }
    }
    return result;
}

int main()
{
    cout << rot13("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnop!@#$%^&*-+=?,qrstuvwxyz8231564970");
    return 0;
}
/*Description:

How can you tell an extrovert from an introvert at NSA?
Va gur ryringbef, gur rkgebireg ybbxf ng gur BGURE thl'f fubrf.

I found this joke on USENET, but the punchline is scrambled. Maybe you can decipher it?
According to Wikipedia, ROT13 is frequently used to obfuscate jokes on USENET.

For this task you're only supposed to substitute characters. Not spaces, punctuation, numbers, etc.

Test examples:

"EBG13 rknzcyr." -> "ROT13 example."

"This is my first ROT13 excercise!" -> "Guvf vf zl svefg EBG13 rkprepvfr!"

Strings
Ciphers
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