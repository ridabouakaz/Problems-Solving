#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
#include <string>
#include <iostream>
#include <string>
using namespace std;
vector<string> number(vector<string> lines) {
	vector<string>result;
	for (int i = 0; i < lines.size(); i++)
	{
		result.push_back(to_string(i + 1) + ": " + lines[i]);

	}
	return result;
}

int main()
{
	vector<string> names = { "a", "b", "c" };
	names = number(names);
	for (string name : names)
	{
		cout << name << endl;
	}
	return 0;
}
/*Description:

Your team is writing a fancy new text editor and you've been tasked with implementing the line numbering.

Write a function which takes a list of strings and returns each line prepended by the correct number.

The numbering starts at 1. The format is n: string. Notice the colon and space in between.

Examples: (Input --> Output)

[] --> []
["a", "b", "c"] --> ["1: a", "2: b", "3: c"]

*/