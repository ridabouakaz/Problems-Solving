#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <sstream>
#include <climits>
#include<iomanip>
/*  */
using namespace std;
vector <int> sortTwisted37(vector <int> numbers) {
    vector<int>resulttotal = numbers;
    vector<int>result = numbers;
    vector<int>resulttemp(numbers.size());
    for (int i = 0; i < numbers.size(); i++)
    {
        if (result[i] >= 0 && result[i] <= 9)
        {
            if (result[i] == 7)
            {
                resulttemp[i] = 3;
            }
            else if (result[i] == 3)
            {
                resulttemp[i] = 7;
            }
            else
            {
                resulttemp[i] = result[i];
            }
        }
        else
        {
            string temp = to_string(result[i]);
            for (int j = 0; j < temp.size(); j++)
            {
                if (temp[j] == '7')
                {
                    temp[j] = '3';
                }
                else if (temp[j] == '3')
                {
                    temp[j] = '7';
                }
                resulttemp[i] = resulttemp[i] * 10 + (temp[j] - '0');
            }
        }

    }

    vector<int> resultaftersort = resulttemp;
    int n = resultaftersort.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (resultaftersort[j] > resultaftersort[j + 1]) {
                int temp = resulttotal[j];
                resulttotal[j] = resulttotal[j + 1];
                resulttotal[j + 1] = temp;
            }
        }
    }
    return resulttotal;
}
int main()
{
    vector<int>result = sortTwisted37({ 1,2,3,4,5,6,7,8,9 });
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << "  ";
    }
    return 0;
}
/*Description:

#Sorting on planet Twisted-3-7

There is a planet... in a galaxy far far away. It is exactly like our planet,
but it has one difference: #The values of the digits 3 and 7 are twisted. Our 3 means 7 on the planet Twisted-3-7.
And 7 means 3.

Your task is to create a method, that can sort an array the way it would be sorted on Twisted-3-7.

7 Examples from a friend from Twisted-3-7:

[1,2,3,4,5,6,7,8,9] -> [1,2,7,4,5,6,3,8,9]
[12,13,14] -> [12,14,13]
[9,2,4,7,3] -> [2,7,4,3,9]

There is no need for a precheck. The array will always be not null and will always contain at least one number.

You should not modify the input array!

Have fun coding it and please don't forget to vote and rank this kata! :-)

I have also created other katas. Take a look if you enjoyed this kata!
Mathematics
Sorting
Arrays
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