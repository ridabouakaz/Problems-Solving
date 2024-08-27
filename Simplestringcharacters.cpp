#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <iostream>
using namespace std;
vector<int> solve(string s)
{
    vector<int>result;
    int uppercasee = 0;
    int lowercase = 0;
    int numbers = 0;
    int spacial = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            numbers++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            lowercase++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            uppercasee++;
        }
        else
        {
            spacial++;
        }

    }
    result.push_back(uppercasee);
    result.push_back(lowercase);
    result.push_back(numbers);
    result.push_back(spacial);

    return result;
}
int main() {

    vector<int>ss = solve("RYT'>s&gO-.CM9AKeH?,5317tWGpS<*x2ukXZD");
    for (int i = 0; i < ss.size(); i++)
    {
        cout << ss[i];
    }
    return 0;
}
/*Description:

In this Kata, you will be given a string and your task will be to return a list of ints detailing the count of uppercase letters, lowercase, numbers and special characters, as follows.

Solve("*'&ABCDabcde12345") = [4,5,5,3].
--the order is: uppercase letters, lowercase, numbers and special characters.

More examples in the test cases.

Good luck!
Fundamentals*/