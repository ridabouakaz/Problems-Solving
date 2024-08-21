#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
#include <string>
#include <iostream>
#include <string>
using namespace std;
long long factorial(int n) {
	long long result = 1;
	for (int i = n; i > 0; i--)
	{
		result = result * i;
	}
	return result;
}

int main()
{

	cout << factorial(2);
	return 0;
}
/*Description:

Your task is to write function factorial.

https://en.wikipedia.org/wiki/Factorial
Fundamentals*/