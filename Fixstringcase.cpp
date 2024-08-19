#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
#include <string>
#include <iostream>
#include <string>
using namespace std;
string solve(const string& str)
{
	string result;
	int countup = 0;
	int countlow = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			countup++;
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			countlow++;
		}

	}
	if (countlow >= countup)
	{
		for (int i = 0; i < str.size(); i++)
		{

			result += tolower(str[i]);

		}


	}
	else
	{
		for (int i = 0; i < str.size(); i++)
		{

			result += toupper(str[i]);

		}

	}
	return result;
}

int main()
{

	cout << solve("coDe");
	return 0;
}
/*Description:

In this Kata, you will be given a string that may have mixed uppercase and lowercase letters and your task is to convert that string to either lowercase only or uppercase only based on:

	make as few changes as possible.
	if the string contains equal number of uppercase and lowercase letters, convert the string to lowercase.

For example:

solve("coDe") = "code". Lowercase characters > uppercase. Change only the "D" to lowercase.
solve("CODe") = "CODE". Uppercase characters > lowecase. Change only the "e" to uppercase.
solve("coDE") = "code". Upper == lowercase. Change all to lowercase.

More examples in test cases. Good luck!

Please also try:

Simple time difference

Simple remove duplicates
*/