#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <iostream>
using namespace std;
long long mygcd(long long a, long long b) {

    while (b != 0) {
        long long int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;

}
int main() {
    cout << mygcd(2078971959651124082, 678462541395275462);
    return 0;
}
/*Description:

Find the greatest common divisor of two positive integers. The integers can be large, so you need to find a clever solution.

The inputs x and y are always greater or equal to 1, so the greatest common divisor will always be an integer that is also greater or equal to 1.
Algorithms
Fundamentals
Recursion*/
