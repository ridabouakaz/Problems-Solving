#include<iostream>
#include <string>
#include<vector>
using namespace std;
string incrementString(const string& str) {
	int numStart = str.size();
	int temp = 0;
	while (numStart > 0 && isdigit(str[numStart - 1])) {
		numStart--;
	}
	string prefix = str.substr(0, numStart);
	string numberPart = str.substr(numStart);
	if (numberPart.empty())
	{
		return prefix + "1";
	}
	int numberLength = numberPart.size();

	for (int j = 0; j < numberPart.size(); j++)
	{
		temp = temp * 10 + (numberPart[j] - '0');
	}
	temp++;
	string newNumber = to_string(temp);
	while (newNumber.size() < numberLength) {
		newNumber = '0' + newNumber;
	}
	return prefix + newNumber;
}
int main()
{
	cout << incrementString("foobar001");
	return 0;
}
/*Description:

Your job is to write a function which increments a string, to create a new string.

	If the string already ends with a number, the number should be incremented by 1.
	If the string does not end with a number. the number 1 should be appended to the new string.

Examples:

foo -> foo1

foobar23 -> foobar24

foo0042 -> foo0043

foo9 -> foo10

foo099 -> foo100

Attention: If the number has leading zeros the amount of digits should be considered.
Regular Expressions
Strings*/
//          ／＞　　フ
//　　　　　| 　n　n 彡
//　 　　　／`ミ＿xノ
//　　 　 /　　　 　 |
//　　　 /　 ヽ　　 ﾉ
//　 　 │　　|　|　|
//　／￣|　　 |　|　|
//　| (￣ヽ＿_ヽ_)__)
//　＼二つ
// ITS CAT FOR YOU