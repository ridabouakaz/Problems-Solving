#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <string_view>
using namespace std;
namespace Bud {
    long long sumOfDivisors(long long n) {
        long long sum = 1;
        long long sqrt_n = std::sqrt(n);
        for (long long i = 2; i <= sqrt_n; ++i) {
            if (n % i == 0) {
                sum += i;
                if (i != n / i) {
                    sum += n / i;
                }
            }
        }
        return sum;
    }

    std::string buddy(long long start, long long limit) {
        for (long long n = start; n <= limit; ++n) {
            long long m = sumOfDivisors(n) - 1;
            if (m > n && sumOfDivisors(m) == n + 1) {
                return "(" + std::to_string(n) + " " + std::to_string(m) + ")";
            }
        }
        return "Nothing";
    }
}
int main()
{
    PhoneDir::phone("90005", "");
}
/*Description:

In mathematics, a Diophantine equation is a polynomial equation, usually with two or more unknowns,
such that only the integer solutions are sought or studied.

In this kata we want to find all integers x, y (x >= 0, y >= 0) solutions of a diophantine equation of the form:
x2 - 4 * y2 = n

(where the unknowns are x and y, and n is a given positive number) in decreasing order of the positive xi.

If there is no solution return [] or "[]" or "". (See "RUN SAMPLE TESTS" for examples of returns).
Examples:

solEquaStr(90005) --> "[[45003, 22501], [9003, 4499], [981, 467], [309, 37]]"
solEquaStr(90002) --> "[]"

Hint:

x2 - 4 * y2 = (x - 2*y) * (x + 2*y)
Fundamentals
Mathematics
Algebra*/
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