#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <sstream>
#include <climits>
using namespace std;
vector<int> xbonacci(vector<int> signature, int n) {
	vector<int>result;
	if (n <= signature.size()) {
		return vector<int>(signature.begin(), signature.begin() + n);
	}
	result = signature;
	for (int i = signature.size(); i < n; i++)
	{
		int tempfirst = 0;
		for (int j = 1; j <= signature.size(); j++)
		{
			tempfirst += result[i - j];

		}
		result.push_back(tempfirst);
	}
	return result;
}
int main()
{
	vector<int>ss = xbonacci({ 0,0,0,0,1 }, 10);
	for (int i = 0; i < ss.size(); i++)
	{
		cout << ss[i];
	}

	return 0;
}
/*Description:

If you have completed the Tribonacci sequence kata, you would know by now that mister Fibonacci has at least a bigger brother. If not,
give it a quick look to get how things work.

Well, time to expand the family a little more: think of a Quadribonacci starting with a signature of 4 elements and each following element is the sum of the 4 previous,
a Pentabonacci (well Cinquebonacci would probably sound a bit more italian,
but it would also sound really awful) with a signature of 5 elements and each following element is the sum of the 5 previous, and so on.

Well, guess what? You have to build a Xbonacci function that takes a signature of X elements - and remember each next element is the sum of
the last X elements - and returns the first n elements of the so seeded sequence.

xbonacci {1,1,1,1} 10 = {1,1,1,1,4,7,13,25,49,94}
xbonacci {0,0,0,0,1} 10 = {0,0,0,0,1,1,2,4,8,16}
xbonacci {1,0,0,0,0,0,1} 10 = {1,0,0,0,0,0,1,2,3,6}
xbonacci {1,1} produces the Fibonacci sequence

Arrays
Lists
Number Theory
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