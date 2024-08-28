#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <iostream>
using namespace std;
int countConsecutivePairs(const std::vector<int>& numbers) {
    int count = 0;
    for (size_t i = 0; i < numbers.size() - 1; i += 2) {
        if (std::abs(numbers[i] - numbers[i + 1]) == 1) {
            count++;
        }
    }
    return count;
}
int main() {
    cout << countConsecutivePairs({ 1, 2, 5, 8, -4, -3, 7, 6, 5 });
    return 0;
}
/*Description:

In this Kata your task will be to return the count of pairs that have consecutive numbers as follows:

pairs([1,2,5,8,-4,-3,7,6,5]) = 3
The pairs are selected as follows [(1,2),(5,8),(-4,-3),(7,6),5]
--the first pair is (1,2) and the numbers in the pair are consecutive; Count = 1
--the second pair is (5,8) and are not consecutive
--the third pair is (-4,-3), consecutive. Count = 2
--the fourth pair is (7,6), also consecutive. Count = 3.
--the last digit has no pair, so we ignore.

More examples in the test cases.

Good luck!

Please also try Simple time difference
Arrays
Fundamentals*/