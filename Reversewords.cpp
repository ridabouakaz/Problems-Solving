#include<iostream>
#include<algorithm>
#include<vector>
#include <array>
#include<cmath>
#include <string>
#include <iostream>
#include <string>
using namespace std;
string reverseEachWord(const string& str) {
    string result;
    int start = 0;

    // Iterate through the string character by character
    while (start < str.length()) {
        int end = start;

        // Find the end of the current word
        while (end < str.length() && str[end] != ' ') {
            ++end;
        }

        // Reverse the current word and add it to the result
        for (int i = end - 1; i >= start; --i) {
            result += str[i];
        }

        // Add the spaces after the word
        while (end < str.length() && str[end] == ' ') {
            result += ' ';
            ++end;
        }

        // Move to the next word
        start = end;
    }
    return result;
}

int main()
{
    cout << reverseEachWord("The quick brown fox jumps over the lazy dog");
    return 0;
}
/*Description:

Complete the function that accepts a string parameter, and reverses each word in the string. All spaces in the string should be retained.
Examples

"This is an example!" ==> "sihT si na !elpmaxe"
"double  spaces"      ==> "elbuod  secaps"


Strings
Fundamentals*/