#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <sstream>
#include <climits>
using namespace std;
string duplicate_encoder(const string& word) {
	string lowerword = word;
	string result;
	transform(lowerword.begin(), lowerword.end(), lowerword.begin(), ::tolower);
	for (int i = 0; i < lowerword.size(); i++)
	{
		if (count(lowerword.begin(), lowerword.end(), lowerword[i]) == 1)
		{
			result += '(';
		}
		else
		{
			result += ')';
		}

	}
	return result;
}
int main()
{
	cout << duplicate_encoder(" ( ( )");
	return 0;
}
/*Description:

The goal of this exercise is to convert a string to a new string where each character in the new string is "(" if that character appears only once in the original string, or ")" if that character appears more than once in the original string. Ignore capitalization when determining if a character is a duplicate.
Examples

"din"      =>  "((("
"recede"   =>  "()()()"
"Success"  =>  ")())())"
"(( @"     =>  "))(("

Notes

Assertion messages may be unclear about what they display in some languages. If you read "...It Should encode XXX", the "XXX" is the expected result, not the input!
*/