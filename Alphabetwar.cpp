#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
string alphabetWar(string fight) {
	int result1 = 0;
	int result2 = 0;
	string result;
	for (char letter : fight) {
		switch (letter) {
			// Left side letters
		case 'w': result1 += 4; break;
		case 'p': result1 += 3; break;
		case 'b': result1 += 2; break;
		case 's': result1 += 1; break;
			// Right side letters
		case 'm': result2 += 4; break;
		case 'q': result2 += 3; break;
		case 'd': result2 += 2; break;
		case 'z': result2 += 1; break;
		}
	}

	if (result1 < result2)
	{
		result = "Right side wins!";
	}
	else if (result1 > result2)
	{
		result = "Left side wins!";

	}
	else
	{
		result = "Let's fight again!";

	}
	return result;
}
int main() {
	cout << alphabetWar("zb");
	return 0;
}
/*Description:
Introduction

There is a war and nobody knows - the alphabet war!
There are two groups of hostile letters. The tension between left side letters and right side letters was too high and the war began.
Task

Write a function that accepts fight string consists of only small letters and return who wins the fight. When the left side wins return Left side wins!, when the right side wins return Right side wins!, in other case return Let's fight again!.

The left side letters and their power:

 w - 4
 p - 3
 b - 2
 s - 1

The right side letters and their power:

 m - 4
 q - 3
 d - 2
 z - 1

The other letters don't have power and are only victims.
Example

AlphabetWar("z");        //=> Right side wins!
AlphabetWar("zdqmwpbs"); //=> Let's fight again!
AlphabetWar("zzzzs");    //=> Right side wins!
AlphabetWar("wwwwwwz");  //=> Left side wins!

Alphabet war Collection
Alphavet war
Alphabet war - airstrike - letters massacre
Alphabet wars - reinforces massacre
Alphabet wars - nuclear strike
Alphabet war - Wo lo loooooo priests join the war
Fundamentals
Strings*/