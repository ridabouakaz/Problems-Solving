#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <sstream>
#include <climits>
#include<iomanip>
using namespace std;
string sortTheInnerContent(const string words, int length) {
    string result;
    string resulttemp;
    for (short i = 0; i <= words.size(); i++)
    {
        if (i < words.size() && words[i] != ' ')
        {
            resulttemp += words[i];
        }
        else
        {
            if (resulttemp.size() > 3)
            {
                char tmepcharctar;
                for (short x = 1; x < resulttemp.size() - 1; x++)
                {
                    for (short j = 1; j < resulttemp.size() - 1; j++)
                    {
                        if (resulttemp[x] >= resulttemp[j])
                        {
                            tmepcharctar = resulttemp[x];
                            resulttemp[x] = resulttemp[j];
                            resulttemp[j] = tmepcharctar;
                        }
                    }

                }
                result += resulttemp;
                resulttemp = "";
            }
            else
            {
                result += resulttemp;
                resulttemp = "";
            }
            if (i < words.size()) {
                result += ' ';
            }
            resulttemp = "";
        }
    }
    return result;
}
int main()
{
    cout << sortTheInnerContent("sort the inner content in descending order", 2);
    return 0;
}
/*Description:

You have to sort the inner content of every word of a string in descending order.

The inner content is the content of a word without first and the last char.

Some examples:

"sort the inner content in descending order"  -->  "srot the inner ctonnet in dsnnieedcg oredr"
"wait for me"        -->  "wiat for me"
"this kata is easy"  -->  "tihs ktaa is esay"

Words are made up of lowercase letters.

The string will never be null and will never be empty. In C/C++ the string is always nul-terminated.

Have fun coding it and please don't forget to vote and rank this kata! :-)

I have also created other katas. Take a look if you enjoyed this kata!
Strings
Logic
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