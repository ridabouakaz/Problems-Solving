#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <sstream>
#include <climits>
#include<iomanip>
using namespace std;
string bingo(vector<pair<string, int>> ticket, int win) {
	int count = 0;
	for (auto& t : ticket)
	{
		for (char c : t.first)
		{
			if (c == t.second)
			{
				count++;
				break;
			}
		}

	}
	return count >= win ? "Winner!" : "Loser!";
}
int main()
{
	cout << bingo({ {"HGTYRE", 74}, {"BE", 66}, {"JKTY", 74} }, 3);
	return 0;
}
/*Description:

Time to win the lottery!

Given a lottery ticket (ticket), represented by an array of 2-value arrays,
you must find out if you've won the jackpot.

Example ticket:

{ { "ABC", 65 }, { "HGR", 74 }, { "BYHT", 74 } }

To do this, you must first count the 'mini-wins' on your ticket. Each subarray has both a string and a number within it.
If the character code of any of the characters in the string matches the number, you get a mini win.
Note you can only have one mini win per sub array.

Once you have counted all of your mini wins, compare that number to the other input provided (win).
If your total is more than or equal to (win), return 'Winner!'. Else return 'Loser!'.

All inputs will be in the correct format. Strings on tickets are not always the same length.
Fundamentals
Strings
Arrays*/
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