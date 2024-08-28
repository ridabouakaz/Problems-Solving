#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <iostream>
using namespace std;
int calc(const string& x)
{
	string result1;
	string result2;
	for (char s : x)
	{
		result1 += to_string(static_cast<int>(s));
	}
	for (char re1 : result1)
	{
		if (re1 == '7')
		{
			re1 = '1';
		}
		result2 += re1;
	}
	int sumresult1 = 0;
	int sumresult2 = 0;

	for (char ch : result1) {
		sumresult1 += ch - '0';
	}

	for (char ch : result2) {
		sumresult2 += ch - '0';
	}
	int result = sumresult1 - sumresult2;
	return result;
}
int main() {
	cout << calc("FVJFVDF");
	return 0;
}
/*Description:

Given a string, turn each character into its ASCII character code and join them together to create a number - let's call this number total1:

'ABC' --> 'A' = 65, 'B' = 66, 'C' = 67 --> 656667

Then replace any incidence of the number 7 with the number 1, and call this number 'total2':

total1 = 656667
			  ^
total2 = 656661
			  ^

Then return the difference between the sum of the digits in total1 and total2:

  (6 + 5 + 6 + 6 + 6 + 7)
- (6 + 5 + 6 + 6 + 6 + 1)
-------------------------
					   6

Fundamentals
Arrays
Strings
Mathematics*/