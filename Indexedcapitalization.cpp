#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <iostream>
using namespace std;
string capitalize(string s, vector<int> idxs)
{
	for (int idx : idxs) {
		if (idx >= 0 && idx < s.length()) {
			s[idx] = toupper(s[idx]);
		}
	}
	return s;
}
int main() {
	cout << capitalize("abcdef", { 1, 2, 5 });
	return 0;
}
/*Description:

Given a string and an array of integers representing indices, capitalize all letters at the given indices.

For example:

	capitalize("abcdef",[1,2,5]) = "aBCdeF"
	capitalize("abcdef",[1,2,5,100]) = "aBCdeF". There is no index 100.

The input will be a lowercase string with no spaces and an array of digits.

Good luck!

Be sure to also try:

Alternate capitalization

String array revisal
Fundamentals*/