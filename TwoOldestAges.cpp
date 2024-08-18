#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
#include <string>
#include <iostream>
#include <string>
using namespace std;
array<int, 2> two_oldest_ages(vector<int> ages)
{
	array<int, 2>result;
	for (int j = 0; j < ages.size(); j++)
	{
		for (int i = 0; i < ages.size() - 1; i++)
		{
			if (ages[i] > ages[i + 1])
			{
				int swap = ages[i];
				ages[i] = ages[i + 1];
				ages[i + 1] = swap;
			}
		}
	}
	result.front() = ages[ages.size() - 1];
	result.back() = ages[ages.size() - 2];
	return result;
}

int main()
{

	array<int, 2>calcul = two_oldest_ages({ 1, 2, 10, 8 });
	for (int i = 0; i < calcul.size(); i++)
	{
		cout << calcul[i];
	}	return 0;
}
/*Description:

The two oldest ages function/method needs to be completed. It should take an array of numbers as its argument and return the two highest numbers within the array. The returned value should be an array in the format [second oldest age,  oldest age].

The order of the numbers passed in could be any order. The array will always include at least 2 items. If there are two or more oldest age, then return both of them in array format.

For example (Input --> Output):

[1, 2, 10, 8] --> [8, 10]
[1, 5, 87, 45, 8, 8] --> [45, 87]
[1, 3, 10, 0]) --> [3, 10]

Arrays
Algorithms*/