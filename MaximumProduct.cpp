#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int adjacentElementsProduct(vector<int> inputArray)
{
	int result = INT_MIN;
	for (int i = 0; i < inputArray.size() - 1; i++)
	{
		int resulttim = inputArray[i] * inputArray[i + 1];
		if (resulttim > result)
		{
			result = resulttim;
		}
	}
	return result;
}
int main() {
	cout << adjacentElementsProduct({ 3,6,-2,-5,7,3 });
	return 0;
}
/*Description:
Task

Given an array of integers , Find the maximum product obtained from multiplying 2 adjacent numbers in the array.
Notes

	Array/list size is at least 2.

	Array/list numbers could be a mixture of positives, negatives also zeroes .

Input >> Output Examples

adjacentElementsProduct([1, 2, 3]); ==> return 6

Explanation:

	The maximum product obtained from multiplying 2 * 3 = 6, and they're adjacent numbers in the array.

	adjacentElementsProduct([9, 5, 10, 2, 24, -1, -48]); ==> return 50

	Explanation:

Max product obtained from multiplying 5 * 10  =  50 .

adjacentElementsProduct([-23, 4, -5, 99, -27, 329, -2, 7, -921])  ==>  return -14

Explanation:

	The maximum product obtained from multiplying -2 * 7 = -14, and they're adjacent numbers in the array.

Playing with Numbers Series
Playing With Lists/Arrays Series
For More Enjoyable Katas
ALL translations are welcomed
Enjoy Learning !!
Zizou
Fundamentals
Arrays*/