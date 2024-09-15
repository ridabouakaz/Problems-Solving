﻿#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <sstream>
#include <climits>
#include<iomanip>
using namespace std;
uint32_t ip_to_int32(const string& ip) {
    uint32_t result = 0;
    uint32_t octet = 0;
    for (size_t i = 0; i < ip.size(); ++i) {
        char c = ip[i];
        if (c == '.') {
            result = (result << 8) | octet;
            octet = 0;
        }
        else {
            octet = octet * 10 + (c - '0');
        }
    }
    result = (result << 8) | octet;
    return result;
}
int main()
{
    cout << ip_to_int32("128.32.10.1");
    return 0;
}
/*Description:

Take the following IPv4 address: 128.32.10.1. This address has 4 octets where each octet is a single byte (or 8 bits).

    1st octet 128 has the binary representation: 10000000
    2nd octet 32 has the binary representation: 00100000
    3rd octet 10 has the binary representation: 00001010
    4th octet 1 has the binary representation: 00000001

So 128.32.10.1 == 10000000.00100000.00001010.00000001

Because the above IP address has 32 bits, we can represent it as the 32 bit number: 2149583361.

Write a function ip_to_int32(ip) ( JS: ipToInt32(ip) ) that takes an IPv4 address and returns a 32 bit number.
Example

"128.32.10.1" => 2149583361

Networks
Algorithms
Bits
Binary
Fundamentals*/
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