#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
#include <string>
#include <unordered_set>
#include <cctype>
using namespace std;
/*	if (str.size()-1 != ' '&& counttemp == count)
		{
			str.push_back(' ');
		}	*/
int find_short(string str)
{
	if (str[str.size()] != ' ')
	{
		str.push_back(' ');
	}
	int count = numeric_limits<int>::max();
	int counttemp = 0;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] != ' ')
		{
			counttemp++;
		}

		else {
			if (counttemp < count)
			{
				count = counttemp;
			}
			counttemp = 0;
		}

	}
	return count;
}
int main()
{
	cout << find_short("Let's travel abroad shall we");
	return 0;
}
/*Description:

Simple, given a string of words, return the length of the shortest word(s).

String will never be empty and you do not need to account for different data types.
Fundamentals*/