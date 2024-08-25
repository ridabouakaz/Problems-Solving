#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <iostream>
using namespace std;
vector<int> vowelIndices(const string& word)
{
    vector<int>result;
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'y' || word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'O' || word[i] == 'U' || word[i] == 'Y')
        {
            result.push_back(i + 1);
        }
    }
    return result;
}
int main() {
    vector<int>ss = vowelIndices("Apple");
    for (int i = 0; i < ss.size(); i++)
    {
        cout << ss[i];

    }
    return 0;
}
/*

We want to know the index of the vowels in a given word, for example, there are two vowels in the word super (the second and fourth letters).

So given a string "super", we should return a list of [2, 4].

Some examples:
Mmmm  => []
Super => [2,4]
Apple => [1,5]
YoMama -> [1,2,4,6]

NOTES

    Vowels in this context refers to: a e i o u y (including upper case)
    This is indexed from [1..n] (not zero indexed!)

Fundamentals
*/