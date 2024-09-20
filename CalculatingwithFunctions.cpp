#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <sstream>
#include <climits>
#include<iomanip>
/*   */
// Number functions
auto zero(auto op = nullptr) { return op ? op(0) : 0; }
auto one(auto op = nullptr) { return op ? op(1) : 1; }
auto two(auto op = nullptr) { return op ? op(2) : 2; }
auto three(auto op = nullptr) { return op ? op(3) : 3; }
auto four(auto op = nullptr) { return op ? op(4) : 4; }
auto five(auto op = nullptr) { return op ? op(5) : 5; }
auto six(auto op = nullptr) { return op ? op(6) : 6; }
auto seven(auto op = nullptr) { return op ? op(7) : 7; }
auto eight(auto op = nullptr) { return op ? op(8) : 8; }
auto nine(auto op = nullptr) { return op ? op(9) : 9; }

// Operation functions
auto plus(int right) { return [=](int left) { return left + right; }; }
auto minus(int right) { return [=](int left) { return left - right; }; }
auto times(int right) { return [=](int left) { return left * right; }; }
auto divided_by(int right) { return [=](int left) { return left / right; }; }
int main()
{
    seven(times(five()));
    return 0;
}
/*Description:

This time we want to write calculations using functions and get the results. Let's have a look at some examples:

seven(times(five())); // must return 35
four(plus(nine())); // must return 13
eight(minus(three())); // must return 5
six(divided_by(two())); // must return 3

Requirements:

    There must be a function for each number from 0 ("zero") to 9 ("nine")
    There must be a function for each of the following mathematical operations: plus, minus, times, divided_by
    Each calculation consist of exactly one operation and two numbers
    The most outer function represents the left operand, the most inner function represents the right operand
    Division should be integer division. For example, this should return 2, not 2.666666...:

eight(divided_by(three()));

Functional Programming*/
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