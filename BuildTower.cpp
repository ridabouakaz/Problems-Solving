#include <iostream>
#include <string>
#include <vector>
using namespace std;
vector<string> towerBuilder(unsigned nFloors) {
	vector<string>result;
	string prive1 = "*";
	string prive2 = "**";
	string sum;
	result.push_back("*");
	for (int i = 1; i < nFloors; i++)
	{
		sum = (prive1 + prive2);
		prive1 = prive2;
		prive2 = sum;
		result.push_back(sum);
	}
	return result;
}
int main()
{
	towerBuilder(3);     // 3    return 0;
}
/*Description:
Build Tower

Build a pyramid-shaped tower, as an array/list of strings, given a positive integer number of floors. ]
A tower block is represented with "*" character.

For example, a tower with 3 floors looks like this:

[
  "  *  ",
  " *** ",
  "*****"
]

And a tower with 6 floors looks like this:

[
  "     *     ",
  "    ***    ",
  "   *****   ",
  "  *******  ",
  " ********* ",
  "***********"
]

Go challenge Build Tower Advanced once you have finished this :)
Strings
ASCII Art
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