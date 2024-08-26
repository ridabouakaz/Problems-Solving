#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <iostream>
using namespace std;
int maxProduct(vector<int>numbers, int sub_size)
{
    int result = 1;
    sort(numbers.begin(), numbers.end());
    int g = numbers.size();
    for (int i = 0; i < sub_size; i++)
    {
        result *= numbers[g - 1 - i];
    }
    return result;
}
int main() {

    cout << maxProduct({ 10,8,7,9 }, 3);
    return 0;
}
/*Description:
Introduction and Warm-up (Highly recommended)
Playing With Lists/Arrays Series
Task

Given an array/list [] of integers , Find the product of the k maximal numbers.
Notes

    Array/list size is at least 3 .

    Array/list's numbers Will be mixture of positives , negatives and zeros

    Repetition of numbers in the array/list could occur.

Input >> Output Examples

maxProduct ({4, 3, 5}, 2) ==>  return (20)

Explanation:

    Since the size (k) equal 2 , then the subsequence of size 2 whose gives product of maxima is 5 * 4 = 20 .

maxProduct ({8, 10 , 9, 7}, 3) ==>  return (720)

Explanation:

    Since the size (k) equal 3 , then the subsequence of size 3 whose gives product of maxima is  8 * 9 * 10 = 720 .

maxProduct ({10, 8, 3, 2, 1, 4, 10}, 5) ==> return (9600)

Explanation:

    Since the size (k) equal 5 , then the subsequence of size 5 whose gives product of maxima is  10 * 10 * 8 * 4 * 3 = 9600 .

maxProduct ({-4, -27, -15, -6, -1}, 2) ==> return (4)

Explanation:

    Since the size (k) equal 2 , then the subsequence of size 2 whose gives product of maxima is  -4 * -1 = 4 .

maxProduct ({10, 3, -1, -27} , 3)  return (-30)

Explanation:

    Since the size (k) equal 3 , then the subsequence of size 3 whose gives product of maxima is 10 * 3 * -1 = -30 .

Playing with Numbers Series
Playing With Lists/Arrays Series
For More Enjoyable Katas
ALL translations are welcomed
Enjoy Learning !!
Zizou
Fundamentals
Arrays*/