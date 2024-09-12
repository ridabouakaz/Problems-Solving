#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <sstream>
#include <climits>
#include<iomanip>
using namespace std;
int nthFibo(int n) {
	vector<int> signature{ 0,1 };
	vector<int> result;
	int swap = 0;
	int tempfirst = 0;
	if (n <= 1)
	{
		result.push_back(0);
	}
	else
	{
		for (int w = 0; w < signature.size(); w++)
		{
			result.push_back(signature[w]);
		}

		for (int i = result.size(); i < n; i++)
		{
			if (i == signature.size())
			{
				swap = result[i - 1];
				tempfirst = swap + tempfirst;
				result.push_back(tempfirst);
			}
			else
			{
				swap = result[i - 2];
				tempfirst = swap + tempfirst;
				result.push_back(tempfirst);
			}
		}
	}
	return result[result.size() - 1];
}
int main()
{
	cout << nthFibo(40);
	return 0;
}
/*Description:

I love Fibonacci numbers in general, but I must admit I love some more than others.

I would like for you to write me a function that, when given a number n (n >= 1 ), returns the nth number in the Fibonacci Sequence.

For example:

   nthFibo(4) == 2

Because 2 is the 4th number in the Fibonacci Sequence.

For reference, the first two numbers in the Fibonacci sequence are 0 and 1, and each subsequent number is the sum of the previous two.
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