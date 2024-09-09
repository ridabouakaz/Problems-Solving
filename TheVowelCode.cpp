#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <sstream>
#include <climits>
using namespace std;
string encode(const string& str) {
	string result;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == 'a')
		{
			result += '1';
		}
		else if (str[i] == 'e')
		{
			result += '2';
		}
		else if (str[i] == 'i')
		{
			result += '3';
		}
		else if (str[i] == 'o')
		{
			result += '4';
		}
		else if (str[i] == 'u')
		{
			result += '5';
		}
		else
		{
			result += str[i];
		}
	}
	return result;
}

string decode(const string& str) {
	string result;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '1')
		{
			result += 'a';
		}
		else if (str[i] == '2')
		{
			result += 'e';
		}
		else if (str[i] == '3')
		{
			result += 'i';
		}
		else if (str[i] == '4')
		{
			result += 'o';
		}
		else if (str[i] == '5')
		{
			result += 'u';
		}
		else
		{
			result += str[i];
		}
	}
	return result;
}
int main()
{

	cout << encode("How are you today?"); \
		cout << endl;
	cout << decode("h2ll4");
	return 0;
}
/*Description:

Step 1: Create a function called encode() to replace all the lowercase vowels in a given string with numbers according to the following pattern:

a -> 1
e -> 2
i -> 3
o -> 4
u -> 5

For example, encode("hello") would return "h2ll4". There is no need to worry about uppercase vowels in this kata.

Step 2: Now create a function called decode() to turn the numbers back into vowels according to the same pattern shown above.

For example, decode("h3 th2r2") would return "hi there".

For the sake of simplicity, you can assume that any numbers passed into the function will correspond to vowels.
Arrays
Strings
Regular Expressions
Fundamentals*/