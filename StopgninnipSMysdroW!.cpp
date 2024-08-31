#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <iostream>
using namespace std;
string spinWords(const string& str)
{
    string result;
    string word;
    for (char cv : str)
    {
        if (cv == ' ')
        {
            if (word.length() >= 5)
            {
                reverse(word.begin(), word.end());
            }

            result += word + ' ';
            word.clear();
        }
        else
        {
            word += cv;
        }
    }
    if (word.length() >= 5) {
        std::reverse(word.begin(), word.end());
    }
    result += word;

    return result;
}

int main() {
    cout << spinWords("Hey fellow warriors ");
    return 0;
}
/*Description:

Write a function that takes in a string of one or more words, and returns the same string, but with all words that have five or more letters reversed (Just like the name of this Kata). Strings passed in will consist of only letters and spaces. Spaces will be included only when more than one word is present.

Examples:

"Hey fellow warriors"  --> "Hey wollef sroirraw"
"This is a test        --> "This is a test"
"This is another test" --> "This is rehtona test"

Strings
Algorithms*/