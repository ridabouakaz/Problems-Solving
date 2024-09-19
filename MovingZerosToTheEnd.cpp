#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <sstream>
#include <climits>
#include<iomanip>
using namespace std;
vector<int> move_zeroes(const vector<int>& input) {
    vector<int>result;
    int count = 0;
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] != 0)
        {
            result.push_back(input[i]);
        }
        else
        {
            count++;
        }
    }
    for (int j = 0; j < count; j++)
    {
        result.push_back(0);
    }
    return result;
}
int main()
{
    vector<int>result = move_zeroes({ 1, 2, 0, 1, 0, 1, 0, 3, 0, 1 });
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << "  ";
    }
    return 0;
}
/*Description:

Write an algorithm that takes an array and moves all of the zeros to the end,
preserving the order of the other elements.

move_zeros({1, 0, 1, 2, 0, 1, 3}) // returns {1, 1, 2, 1, 3, 0, 0}

Arrays
Sorting
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