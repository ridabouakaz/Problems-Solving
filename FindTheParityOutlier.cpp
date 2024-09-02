#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <sstream>
#include <climits>
using namespace std;
int FindOutlier(vector<int> arr) {
	int result = 0;
	vector<int> evennumber;
	vector<int> oddnumber;
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] % 2 == 0)
		{
			evennumber.push_back(arr[i]);
		}
		else
		{
			oddnumber.push_back(arr[i]);
		}
	}
	if (evennumber.size() < 2)
	{
		result = evennumber.at(0);
	}
	else if (oddnumber.size() < 2)
	{
		result = oddnumber.at(0);
	}
	return result;
}
int main()
{
	cout << FindOutlier({ 2, -6, 8, -10, -3 });
	return 0;
}
/*Description:

You are given an array (which will have a length of at least 3, but could be very large) containing integers. The array is either entirely comprised of odd integers or entirely comprised of even integers except for a single integer N. Write a method that takes the array as an argument and returns this "outlier" N.
Examples

[2, 4, 0, 100, 4, 11, 2602, 36] -->  11 (the only odd number)

[160, 3, 1719, 19, 11, 13, -21] --> 160 (the only even number)

Algorithms*/