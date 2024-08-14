#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
#include <string>
using namespace std;
string odd_or_even(const vector<int> arr)
{
	string resulttotal;
	int result = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		result += arr[i];
	}
	if (result % 2 == 0)
	{
		resulttotal = "even";
	}
	else
	{
		resulttotal = "odd";
	}
	return resulttotal;
}

int main()
{
	cout << odd_or_even({});
	return 0;
}
/*Description:
Task:

Given a list of integers, determine whether the sum of its elements is odd or even.

Give your answer as a string matching "odd" or "even".

If the input array is empty consider it as: [0] (array with a zero).
Examples:

Input: [0]
Output: "even"

Input: [0, 1, 4]
Output: "odd"

Input: [0, -1, -5]
Output: "even"

Have fun!
*/