#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
#include <string>
#include <iostream>
#include <string>
using namespace std;
string replaceAll(string str) {
	string result;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '#')
		{
			break;
		}
		result += str[i];
	}
	return result;
}

int main()
{

	cout << replaceAll("www.codewars.com#about");
	return 0;
}
/*Description:

Complete the function/method so that it returns the url with anything after the anchor (#) removed.
Examples

"www.codewars.com#about" --> "www.codewars.com"
"www.codewars.com?page=1" -->"www.codewars.com?page=1"

*/