#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <iostream>
using namespace std;
unsigned int sum_cubes(unsigned int n) {

    int result = 0;
    for (int i = 1; i <= n; i++)
    {
        result += i * i * i;
    }
    return result;
}
int main() {
    cout << sum_cubes(4);
    return 0;
}
/*Description:

Write a function that takes a positive integer n, sums all the cubed values from 1 to n(inclusive), and returns that sum.

Assume that the input n will always be a positive integer.

Examples : (Input-- > output)

2 -- > 9 (sum of the cubes of 1 and 2 is 1 + 8)
3 -- > 36 (sum of the cubes of 1, 2, and 3 is 1 + 8 + 27)

Fundamentals*/