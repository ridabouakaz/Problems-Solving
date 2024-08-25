#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <iostream>
using namespace std;
int digits(uint64_t n) {
    string result = to_string(n); int count = 0;
    for (int i = 0; i < result.size(); i++)
    {

        count++;
    }
    return count;
}
int main() {
    cout << digits(12345ull);
    return 0;
}
/*Description:

Determine the total number of digits in the integer (n>=0) given as input to the function. For example, 9 is a single digit, 66 has 2 digits and 128685 has 6 digits. Be careful to avoid overflows/underflows.

All inputs will be valid.
Strings
Fundamentals*/