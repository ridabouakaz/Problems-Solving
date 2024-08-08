#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
#include <string>
using namespace std;
int square_digits(int num1)
{
	string num = to_string(num1);
	string result;
	for (char st : num) {
		int numint = st - '0';
		int sequard = numint * numint;
		result += to_string(sequard);
	}
	return stoi(result);
}
int main()
{
	cout << square_digits(13579);
	return 0;
}
/*Description:

Welcome. In this kata, you are asked to square every digit of a number and concatenate them.

For example, if we run 9119 through the function, 811181 will come out, because 92 is 81 and 12 is 1. (81-1-1-81)

Example #2: An input of 765 will/should return 493625 because 72 is 49, 62 is 36, and 52 is 25. (49-36-25)

Note: The function accepts an integer and returns an integer.

Happy Coding!
*/