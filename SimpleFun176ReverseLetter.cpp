#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
#include <string>
#include <iostream>
#include <string>
using namespace std;
string reverse_letter(string str)
{
	string result;
	for (int i = str.size(); i >= 0; i--)
	{
		if (str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
		{
			result += str[i];
		}
		else
		{
			continue;
		}
	}
	return result;
}

int main()
{

	cout << reverse_letter("krish21an");
	return 0;
}
/*Description:
Task

Given a string str, reverse it and omit all non-alphabetic characters.
Example

For str = "krishan", the output should be "nahsirk".

For str = "ultr53o?n", the output should be "nortlu".
Input/Output

	[input] string str

A string consists of lowercase latin letters, digits and symbols.

	[output] a string

Fundamentals*/