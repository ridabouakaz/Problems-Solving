#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
#include <string>
#include <iostream>
#include <string>
using namespace std;
bool IsLeapYear(int year) {
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (!(year % 400 == 0))
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	else
	{
		return false;
	}
}

int main()
{

	cout << IsLeapYear(2020);
	return 0;
}
/*Description:

In this kata you should simply determine, whether a given year is a leap year or not. In case you don't know the rules, here they are:

	Years divisible by 4 are leap years,
	but years divisible by 100 are not leap years,
	but years divisible by 400 are leap years.

Tested years are in range 1600 ≤ year ≤ 4000.
Date Time
Algorithms*/