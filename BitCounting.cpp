#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <sstream>
#include <climits>
using namespace std;
int  highAndLow(int n) {
    if (n == 0) {
        return 0;
    }

    string binary = "";
    while (n > 0) {
        int remainder = n % 2;
        binary = (remainder == 1 ? '1' : '0') + binary;
        n = n / 2;
    }
    int result = 0;
    for (int i = 0; i < binary.size(); i++)
    {
        if (binary[i] == '1')
        {
            result++;
        }

    }
    return result;
}
int main()
{
    cout << highAndLow(1234);
    return 0;
}
/*
Description:
Write a function that takes an integer as input, and returns the number of bits that are equal to one in the binary representation of that number. You can guarantee that input is non-negative.

Example: The binary representation of 1234 is 10011010010, so the function should return 5 in this case
Bits
Algorithms
*/