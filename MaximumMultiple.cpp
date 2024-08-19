#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
#include <string>
#include <iostream>
#include <string>
using namespace std;
int maxMultiple(int divisor, int bound)
{
	int result = 0;
	for (int i = bound; i > divisor; i--)
	{
		if (i % divisor == 0)
		{
			result = i;
			break;
		}
	}
	return result;
}

int main()
{

	cout << maxMultiple(37, 200);
	return 0;
}
/*Description:
Task

Given a Divisor and a Bound , Find the largest integer N , Such That ,
Conditions :

	N is divisible by divisor

	N is less than or equal to bound

	N is greater than 0.

Notes

	The parameters (divisor, bound) passed to the function are only positive values .
	It's guaranteed that a divisor is Found .

Input >> Output Examples

divisor = 2, bound = 7 ==> return (6)

Explanation:

(6) is divisible by (2) , (6) is less than or equal to bound (7) , and (6) is > 0 .

divisor = 10, bound = 50 ==> return (50)

Explanation:

(50) is divisible by (10) , (50) is less than or equal to bound (50) , and (50) is > 0 .*

divisor = 37, bound = 200 ==> return (185)

Explanation:

(185) is divisible by (37) , (185) is less than or equal to bound (200) , and (185) is > 0 .
Playing with Numbers Series
Playing With Lists/Arrays Series
Bizarre Sorting-katas
For More Enjoyable Katas
ALL translations are welcomed
Enjoy Learning !!
Zizou
*/