#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
#include <string>
using namespace std;
uint64_t descendingOrder(uint64_t a)
{
	vector<int>digits;
	while (a > 0) {
		digits.push_back(a % 10);
		a /= 10;
	}

	sort(digits.begin(), digits.end());
	reverse(digits.begin(), digits.end());
	long long resulttotal = 0;
	for (int digit : digits) {
		resulttotal = resulttotal * 10 + digit;
	}
	return resulttotal;
}
int main()
{
	cout << descendingOrder(9997654411);
}
/*Description:

Your task is to make a function that can take any non-negative integer as an argument and return it with its digits in descending order. Essentially, rearrange the digits to create the highest possible number.
Examples:

Input: 42145 Output: 54421

Input: 145263 Output: 654321

Input: 123456789 Output: 987654321
*/