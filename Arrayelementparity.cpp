#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <iostream>
using namespace std;
int solve(vector<int> v) {
	int result = 0;
	for (int i = 0; i < v.size(); i++)
	{
		if (count(v.begin(), v.end(), v[i]) >= 1 && count(v.begin(), v.end(), -v[i]) == 0 || count(v.begin(), v.end(), v[i]) == 0 && count(v.begin(), v.end(), -v[i]) >= 1)
		{
			result = v[i];
		}
	}
	return result;
}
int main() {
	cout << solve({ -110,110,-38,-38,-62,62,-38,-38,-38 });
	return 0;
}
/*Description:

In this Kata, you will be given an array of integers whose elements have both a negative and a positive value, except for one integer that is either only negative or only positive. Your task will be to find that integer.

Examples:

[1, -1, 2, -2, 3] => 3

3 has no matching negative appearance

[-3, 1, 2, 3, -1, -4, -2] => -4

-4 has no matching positive appearance

[1, -1, 2, -2, 3, 3] => 3

(the only-positive or only-negative integer may appear more than once)

Good luck!
Arrays
Algorithms*/