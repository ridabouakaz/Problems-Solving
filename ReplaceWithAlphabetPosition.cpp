#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <sstream>
#include <climits>
using namespace std;
string alphabet_position(const string& text) {
	int number = 0;
	string result;
	bool first = true;
	for (char word : (text))
	{
		if (word >= 'a' && word <= 'z')
		{
			number = int(word) - int('a') + 1;
		}
		else if (word >= 'A' && word <= 'Z')
		{
			number = int(word) - int('A') + 1;
		}
		else {
			continue;
		}
		if (!first) {
			result += " ";
		}
		result += to_string(number);
		first = false;
	}
	return result;
}
int main()
{
	cout << alphabet_position("The sunset sets at twelve o' clock.");
	return 0;
}
/*Description:

Welcome.

In this kata you are required to, given a string, replace every letter with its position in the alphabet.

If anything in the text isn't a letter, ignore it and don't return it.

"a" = 1, "b" = 2, etc.
Example

Input = "The sunset sets at twelve o' clock."
Output = "20 8 5 19 21 14 19 5 20 19 5 20 19 1 20 20 23 5 12 22 5 15 3 12 15 3 11"

Strings
Fundamentals*/