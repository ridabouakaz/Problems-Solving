#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
#include <string>
#include <iostream>
#include <string>
using namespace std;
vector<int> get_even_numbers(const vector<int>& arr) {
	vector<int>result;
	for (int i = 0; i < arr.size(); i++)
	{
		if (arr[i] % 2 == 0)
		{
			result.push_back(arr[i]);
		}
	}
	return result;
}

int main()
{
	vector<int>test = get_even_numbers({ 1, 2, 3, 4, 5 });
	for (int i = 0; i < test.size(); i++)
	{
		cout << test[i];

	}
	return 0;
}
/*Description:

The solution would work like the following:

get_even_numbers({2,4,5,6}) => {2,4,6}

Arrays
Fundamentals*/