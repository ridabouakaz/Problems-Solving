#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <sstream>
#include <climits>
#include<iomanip>
using namespace std;
string group_by_commas(int n) {
	string snum = to_string(n);
	int count = 0;
	string result;
	for (int i = snum.size() - 1; i >= 0; i--)
	{
		result = snum[i] + result;
		count++;
		if (count % 3 == 0 && i != 0)
		{
			result = ',' + result;
		}
	}
	return result;
}
int main()
{
	cout << group_by_commas(1234567);
	return 0;
}
/*Description:

Finish the solution so that it takes an input n (integer) and returns
a string that is the decimal representation of the number grouped by commas after every 3 digits.

Assume: 0 <= n < 2147483647
Examples

	   1  ->           "1"
	  10  ->          "10"
	 100  ->         "100"
	1000  ->       "1,000"
   10000  ->      "10,000"
  100000  ->     "100,000"
 1000000  ->   "1,000,000"
35235235  ->  "35,235,235"

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