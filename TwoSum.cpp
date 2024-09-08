#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <sstream>
#include <climits>
using namespace std;
pair<size_t, size_t> two_sum(const vector<int>& numbers, int target) {
    pair<size_t, size_t>result;
    for (int j = 0; j < numbers.size(); j++)
    {
        for (int i = j + 1; i < numbers.size(); i++)
        {
            if (numbers[j] + numbers[i] == target)
            {
                result.first = j;
                result.second = i;
            }

        }
    }
    return result;
}
int main()
{
    pair<size_t, size_t>ss;
    ss = two_sum({ 1234, 5678, 9012 }, 14690);

    cout << ss.first << endl;
    cout << ss.second << endl;
    return 0;
}
/*

Write a function that takes an array of numbers (integers for the tests) and a target number. It should find two different items in the array that, when added together, give the target value. The indices of these items should then be returned in a tuple / list (depending on your language) like so: (index1, index2).

For the purposes of this kata, some tests may have multiple answers; any valid solutions will be accepted.

The input will always be valid (numbers will be an array of length 2 or greater, and all of the items will be numbers; target will always be the sum of two different items from that array).

Based on: https://leetcode.com/problems/two-sum/

two_sum({1, 2, 3}, 4); // returns {0, 2} or {2, 0}
two_sum({3, 2, 4}, 6); // returns {1, 2} or {2, 1}

Arrays
Fundamentals
Algorithms
*/