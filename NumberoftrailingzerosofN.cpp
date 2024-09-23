#include<iostream>
#include <string>
#include<vector>
using namespace std;
long zeros(int n) {
    int count = 0;

    for (int i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }

    return count;
}
int main()
{
    cout << zeros(1000);
    return 0;
}
/*Description:

Write a program that will calculate the number of trailing zeros in a factorial of a given number.

N! = 1 * 2 * 3 *  ... * N

Be careful 1000! has 2568 digits...

For more info, see: http://mathworld.wolfram.com/Factorial.html
Examples
N 	Product 	N factorial 	Trailing zeros
6 	1*2*3*4*5*6 	720 	1
12 	1*2*3*4*5*6*7*8*9*10*11*12 	479001600 	2

Hint: You're not meant to calculate the factorial. Find another way to find the number of zeros.
Algorithms
Logic
Mathematics*/
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