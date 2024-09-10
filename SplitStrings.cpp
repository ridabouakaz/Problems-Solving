#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <sstream>
#include <climits>
using namespace std;
vector<string> solution(const string& s) {
    vector<string> result;
    string str = s;
    if (str.size() % 2 != 0) {
        str += '_';
    }
    for (size_t i = 0; i < str.size(); i += 2) {
        result.push_back(str.substr(i, 2));
    }
    return result;
}
int main()
{
    vector<string> result = solution("abc");
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
    }
    return 0;
}
/*Description:

Complete the solution so that it splits the string into pairs of two characters. If the string contains an odd number of characters then it should replace the missing second character of the final pair with an underscore ('_').

Examples:

* 'abc' =>  ['ab', 'c_']
* 'abcdef' => ['ab', 'cd', 'ef']

Regular Expressions
Strings
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