#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

string bumps(string road)
{
    int count = 0;
    string result;
    for (int i = 0; i < road.size(); i++)
    {
        if (road[i] == 'n')
        {
            count++;
        }
    }
    if (count < 16)
    {
        result = "Woohoo!";
    }
    else
    {
        result = "Car Dead";

    }
    return result;
}
int main() {
    cout << bumps("nnn_n__n_n___nnnnn___n__nnn__");
    return 0;
}
/*Description:

Your car is old, it breaks easily. The shock absorbers are gone and you think it can handle about 15 more bumps before it dies totally.

Unfortunately for you, your drive is very bumpy! Given a string showing either flat road (_) or bumps (n). If you are able to reach home safely by encountering 15 bumps or less, return Woohoo!, otherwise return Car Dead
Fundamentals
Strings*/