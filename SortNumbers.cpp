#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
#include <string>
#include <iostream>
#include <string>
using namespace std;
vector<int> solution(vector<int> nums) {
	for (int j = 0; j < nums.size(); j++)
	{
		for (int i = 0; i < nums.size() - 1; i++)
		{
			if (nums[i] > nums[i + 1])
			{
				int swap = nums[i];
				nums[i] = nums[i + 1];
				nums[i + 1] = swap;
			}
		}
	}
	return nums;
}

int main()
{
	vector<int>calcul = solution({ 1,2,3,10,5 });
	for (int i = 0; i < calcul.size(); i++)
	{
		cout << calcul[i];
	}	return 0;
}
/*Description:

Finish the solution so that it sorts the passed in array of numbers. If the function passes in an empty array or null/nil value then it should return an empty array.

For example:

sortNumbers({1, 2, 10, 50, 5}) // sholud return {1, 2, 5, 10, 50}
sortNumbers({}) // should return {}
*/