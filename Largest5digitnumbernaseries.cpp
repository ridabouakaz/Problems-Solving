#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
#include <string>
#include <iostream>
#include <string>
using namespace std;
int largest_five_digits(const string& digits) {
	int maxumber = 0;

	for (int i = 0; i <= digits.size() - 5; i++)
	{
		int minvalue = 0;
		for (int j = 0; j < 5; j++)
		{
			minvalue = minvalue * 10 + (digits[i + j] - '0');
		}
		if (minvalue > maxumber)
		{
			maxumber = minvalue;
		}
	}
	return maxumber;
}

int main()
{

	cout << largest_five_digits("283910");
	return 0;
}
/*Description:

In the following 6 digit number:

283910

91 is the greatest sequence of 2 consecutive digits.

In the following 10 digit number:

1234567890

67890 is the greatest sequence of 5 consecutive digits.

Complete the solution so that it returns the greatest sequence of five consecutive digits found within the number given. The number will be passed in as a string of only digits. It should return a five digit integer. The number passed may be as large as 1000 digits.

Adapted from ProjectEuler.net
Algorithms*/