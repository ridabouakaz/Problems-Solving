#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <sstream>
#include <climits>
using namespace std;
string to_camel_case(string text) {
	string result;
	for (int i = 0; i < text.size(); i++)
	{
		if (text[i] != '-' && text[i] != '_')
		{
			result += text[i];
		}
		else
		{
			result += toupper(text[i + 1]);
			i++;
		}
	}
	return result;
}
int main()
{
	cout << to_camel_case("The-Stealth-Warrior");
	return 0;
}
/*Description:

Complete the method/function so that it converts dash/underscore delimited words into camel casing.
The first word within the output should be capitalized only if the original word was capitalized (known as Upper Camel Case,
also often referred to as Pascal case). The next words should be always capitalized.
Examples

"the-stealth-warrior" gets converted to "theStealthWarrior"

"The_Stealth_Warrior" gets converted to "TheStealthWarrior"

"The_Stealth-Warrior" gets converted to "TheStealthWarrior"
Regular Expressions
Algorithms
Strings*/