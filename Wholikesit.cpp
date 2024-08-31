#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <iostream>
using namespace std;
string likes(const vector<string>& names)
{
    string result;
    string integrtostring = to_string(names.size() - 2);
    if (names.size() == 0)
    {
        result += "no one likes this";
    }
    if (names.size() == 1)
    {
        result += names[0] + " likes this";
    }
    if (names.size() == 2)
    {
        result += names[0] + " and " + names[1] + " likes this";
    }
    if (names.size() == 3)
    {
        result += names[0] + ", " + names[1] + " and " + names[2] + " likes this";
    }
    if (names.size() > 3)
    {
        result += names[0] + ", " + names[1] + " and " + integrtostring + " others " + "likes this";

    }
    return result;
}

int main() {
    cout << likes({ "Alex", "Jacob", "Mark", "Max", "Alex", "Jacob", "Mark", "Max" });
    return 0;
}
/*Description:

You probably know the "like" system from Facebook and other pages. People can "like" blog posts, pictures or other items. We want to create the text that should be displayed next to such an item.

Implement the function which takes an array containing the names of people that like an item. It must return the display text as shown in the examples:

[]                                -->  "no one likes this"
["Peter"]                         -->  "Peter likes this"
["Jacob", "Alex"]                 -->  "Jacob and Alex like this"
["Max", "John", "Mark"]           -->  "Max, John and Mark like this"
["Alex", "Jacob", "Mark", "Max"]  -->  "Alex, Jacob and 2 others like this"

Note: For 4 or more names, the number in "and 2 others" simply increases.
Strings
Fundamentals*/