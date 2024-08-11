#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
#include <string>
#include <unordered_set>
#include <cctype>
using namespace std;
bool is_isogram(string str)
{
    unordered_set<char> seen;
    for (char ch : str) {
        char lower_ch = tolower(ch);
        if (seen.find(lower_ch) != seen.end()) {
            return false;
        }
        seen.insert(lower_ch);
    }
    return true;

}
int main()
{
    cout << is_isogram("isIsogram");
    return 0;
}
/*Description:

An isogram is a word that has no repeating letters, consecutive or non-consecutive. Implement a function that determines whether a string that contains only letters is an isogram. Assume the empty string is an isogram. Ignore letter case.

Example: (Input --> Output)

"Dermatoglyphics" --> true
"aba" --> false
"moOse" --> false (ignore letter case)

*/