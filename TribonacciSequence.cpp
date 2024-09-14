#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <sstream>
#include <climits>
#include<iomanip>
using namespace std;
vector<int> tribonacci(vector<int> signature, int n)
{
    vector<int>result;
    int prive1 = signature.at(0);
    int prive2 = signature.at(1);
    int prive3 = signature.at(2);
    int sumnumber = 0;
    if (n == 0)
    {
        result;
    }
    if (n < 3) {
        for (int i = 0; i < n; ++i) {
            result.push_back(signature[i]);
        }
        return result;
    }
    else
    {
        result = signature;
        for (int i = signature.size(); i < n; i++)
        {
            sumnumber = prive1 + prive2 + prive3;
            result.push_back(sumnumber);
            prive1 = prive2;
            prive2 = prive3;
            prive3 = sumnumber;
        }
    }
    return result;
}
int main()
{
    int third = rand() % 10;
    vector<int>ss = tribonacci({ 1,2,third }, 0);
    for (int i = 0; i < ss.size(); i++)
    {
        cout << ss[i] << "  ";
    }
    return 0;
}
/*Description:

Well met with Fibonacci bigger brother, AKA Tribonacci.

As the name may already reveal, it works basically like a Fibonacci, but summing the last 3 (instead of 2) numbers of the sequence to generate the next.
And, worse part of it, regrettably I won't get to hear non-native Italian speakers trying to pronounce it :(

So, if we are to start our Tribonacci sequence with [1, 1, 1] as a starting input (AKA signature),
we have this sequence:

[1, 1 ,1, 3, 5, 9, 17, 31, ...]

But what if we started with [0, 0, 1] as a signature? As starting with [0, 1] instead of [1, 1] basically shifts the common Fibonacci sequence by once place,
you may be tempted to think that we would get the same sequence shifted by 2 places,
but that is not the case and we would get:

[0, 0, 1, 1, 2, 4, 7, 13, 24, ...]

Well, you may have guessed it by now, but to be clear: you need to create a fibonacci function that given a signature array/list,
returns the first n elements - signature included of the so seeded sequence.

Signature will always contain 3 numbers; n will always be a non-negative number; if n == 0,
then return an empty array (except in C return NULL) and be ready for anything else which is not clearly specified ;)

If you enjoyed this kata more advanced and generalized version of it can be found in the Xbonacci kata

[Personal thanks to Professor Jim Fowler on Coursera
for his awesome classes that I really recommend to any math enthusiast and for showing me this mathematical curiosity too with his usual contagious passion :)]
Number Theory
Arrays
Lists
Fundamentals*/
//          ／＞　　フ
//　　　　　| 　n　n 彡
//　 　　　／`ミ＿xノ
//　　 　 /　　　 　 |
//　　　 /　 ヽ　　 ﾉ
//　 　 │　　|　|　|
//　／￣|　　 |　|　|
//　| (￣ヽ＿_ヽ_)__)
//　＼二つ
// ITS CAT FOR YOU