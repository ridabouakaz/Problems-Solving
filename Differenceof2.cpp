#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <sstream>
#include <climits>
#include<iomanip>
using namespace std;
vector<pair<int, int>> twos_difference(const vector<int>& vec) {
    vector<pair<int, int>>result;
    pair<int, int>resulttemp;
    vector<int>temp = vec;
    sort(temp.begin(), temp.end());
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec.size(); j++)
        {
            if (temp[i] - temp[j] == 2)
            {
                resulttemp.first = temp[i];
                resulttemp.second = temp[j];
                result.push_back(resulttemp);
            }

        }
    }
    return result;
}
int main()
{
    void print_result(const vector<pair<int, int>>&result) {
        for (const auto& p : result) {
            cout << "(" << p.first << ", " << p.second << ") ";
        }
        cout << endl;
        vector<pair<int, int>>ss = twos_difference({ 1, 2, 3, 4 });
        for (int i = 0; i < ss.size(); i++)
        {
            cout << ss[i] << "  ";
        }
        return 0;
    }
    /*Description:

    The objective is to return all pairs of integers from a given array of integers that have a difference of 2.

    The result array should be sorted in ascending order of values.

    Assume there are no duplicate integers in the array.
    The order of the integers in the input array should not matter.
    Examples

    [1, 2, 3, 4]  should return [[1, 3], [2, 4]]

    [4, 1, 2, 3]  should also return [[1, 3], [2, 4]]

    [1, 23, 3, 4, 7] should return [[1, 3]]

    [4, 3, 1, 5, 6] should return [[1, 3], [3, 5], [4, 6]]

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