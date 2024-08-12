#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
#include <string>
using namespace std;
long sumTwoSmallestNumbers(vector<int> numbers)
{
	sort(numbers.begin(), numbers.end());
	int result = numbers[0] + numbers[1];
	return result;
}
int main()
{
	cout << sumTwoSmallestNumbers({ 10, 343445353, 3453445, 345354535 });
	return 0;
}
/*Description:

Create a function that returns the sum of the two lowest positive numbers given an array of minimum 4 positive integers. No floats or non-positive integers will be passed.

For example, when an array is passed like [19, 5, 42, 2, 77], the output should be 7.

[10, 343445353, 3453445, 3453545353453] should return 3453455.
*/