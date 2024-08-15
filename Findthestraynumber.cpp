#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
#include <string>
#include <iostream>
#include <string>
using namespace std;
int stray(vector<int> numbers) {
	int result = 0;
	for (int i = 0; i < numbers.size(); i++)
	{
		if (count(numbers.begin(), numbers.end(), numbers[i]) == 1)
		{
			result = numbers[i];
		}
	}
	return result;
}

int main()
{
	cout << stray({ 17, 17, 3, 17, 17, 17, 17 });
	return 0;
}
/*Description:

You are given an odd-length array of integers, in which all of them are the same, except for one single number.

Complete the method which accepts such an array, and returns that single different number.

The input array will always be valid! (odd-length >= 3)
Examples

[1, 1, 2] ==> 2
[17, 17, 3, 17, 17, 17, 17] ==> 3

*/