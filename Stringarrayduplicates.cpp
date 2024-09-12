#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <sstream>
#include <climits>
#include<iomanip>
using namespace std;
vector<string> dup(vector<string> arr) {
	vector<string>resultsum;
	string result;
	for (const string& word : arr)
	{
		result = "";
		result += word[0];
		for (int j = 1; j < word.size(); j++)
		{
			if (word[j] != word[j - 1])
			{
				result += word[j];
			}
			else
			{
				continue;
			}
		}
		resultsum.push_back(result);
	}
	return resultsum;
}
int main()
{
	vector<string>casetast1 = { {"ccooddddddewwwaaaaarrrrsssss","piccaninny","hubbubbubboo"} };
	vector<string>result = dup(casetast1);
	for (int i = 0; i < casetast1.size(); i++)
	{
		cout << result[i] << " ";
	}
	return 0;
}
/*Description:

In this Kata, you will be given an array of strings and your task is to remove all consecutive duplicate letters from each string in the array.

For example:

	dup(["abracadabra","allottee","assessee"]) = ["abracadabra","alote","asese"].

	dup(["kelless","keenness"]) = ["keles","kenes"].

Strings will be lowercase only, no spaces. See test cases for more examples.

Good luck!

If you like this Kata, please try:

Alternate capitalization

Vowel consonant lexicon
Strings
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