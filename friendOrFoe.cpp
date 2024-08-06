#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
#include <string>
using namespace std;
vector<string> friendOrFoe(vector<string> input)
{
	vector<string>result;

	for (string ss : input)
	{
		if (ss.size() == 4)
		{
			result.push_back(ss);
		}
	}
	if (result.size() == 0) return { "" };
	return result;
}
int main()
{
	cout << "hello";
	return 0;
}
/*Description:

Make a program that filters a list of strings and returns a list with only your friends name in it.

If a name has exactly 4 letters in it, you can be sure that it has to be a friend of yours! Otherwise, you can be sure he's not...

Input = ["Ryan", "Kieran", "Jason", "Yous"]
Output = ["Ryan", "Yous"]

Input = ["Peter", "Stephen", "Joe"]
Output = []

Input strings will only contain letters. Note: keep the original order of the names in the output.
*/