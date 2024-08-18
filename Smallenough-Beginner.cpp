#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
#include <string>
#include <iostream>
#include <string>
using namespace std;
bool small_enough(vector<int> arr, int limit) {

	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] > limit)
		{
			return false;
		}
	}
	return true;
}

int main()
{

	cout << small_enough({ 80, 117, 115, 104, 45, 85, 112, 115 }, 120);
	return 0;
}
/*Description:

You will be given an array and a limit value. You must check that all values in the array are below or equal to the limit value. If they are, return true. Else, return false.

You can assume all values in the array are numbers.
*/