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

Determine the total number of digits in the integer (n>=0) given as input to the function. For example, 9 is a single digit, 66 has 2 digits and 128685 has 6 digits. Be careful to avoid overflows/underflows.

All inputs will be valid.
Strings
Fundamentals*/