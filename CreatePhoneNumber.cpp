#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <iostream>
using namespace std;
string createPhoneNumber(int arr[10]) {
	string result;
	result += "(";
	for (int i = 0; i < 3; i++)
	{
		result += to_string(arr[i]);
	}
	result += ") ";
	for (int i = 3; i < 6; i++)
	{
		result += to_string(arr[i]);
	}
	result += "-";
	for (int i = 6; i < 10; i++)
	{
		result += to_string(arr[i]);
	}
	return result;

}
int main()
{
	int phone[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	cout << createPhoneNumber(phone);
	return 0;
}
/*Description:

Write a function that accepts an array of 10 integers (between 0 and 9), that returns a string of those numbers in the form of a phone number.
Example

createPhoneNumber(int[10]{1, 2, 3, 4, 5, 6, 7, 8, 9, 0}) // => returns "(123) 456-7890"

The returned format must be correct in order to complete this challenge.

Don't forget the space after the closing parentheses!
Arrays
Strings
Regular Expressions
Algorithms*/