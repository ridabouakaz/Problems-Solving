#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <iostream>
using namespace std;
string switcheroo(const string& s)
{
    string result;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
        {
            result += 'b';
        }
        else if (s[i] == 'b')
        {
            result += 'a';
        }
        else
        {
            result += s[i];
        }
    }
    return result;
}
int main() {

    cout << switcheroo("aaabcccbaaa");
    return 0;
}
/*Description:

Given a string made up of letters a, b, and/or c, switch the position of letters a and b (change a to b and vice versa). Leave any incidence of c untouched.

Example:

'acb' --> 'bca'
'aabacbaa' --> 'bbabcabb'
Fundamentals
Strings*/