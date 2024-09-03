#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <sstream>
#include <climits>
using namespace std;
bool isValidWalk(vector<char> walk) {
	int countwande = 0;
	int countnands = 0;
	if (walk.size() != 10)
	{
		return false;
	}
	else
	{
		for (int i = 0; i < walk.size(); i++)
		{
			if (walk[i] == 'w')
			{
				countwande++;
			}
			else if (walk[i] == 'e')
			{
				countwande--;
			}
			else if (walk[i] == 'n')
			{
				countnands++;
			}
			else if (walk[i] == 's')
			{
				countnands--;
			}
		}
	}
	return countwande == 0 && countnands == 0;
}
int main()
{
	cout << isValidWalk({ 'n','s','n','s','n','s','n','s','n','n' });
	return 0;
}
/*Description:

You live in the city of Cartesia where all roads are laid out in a perfect grid. You arrived ten minutes too early to an appointment,
so you decided to take the opportunity to go for a short walk.The city provides its citizens with a Walk Generating App on their phones --
everytime you press the button it sends you an array of one-letter strings representing directions
to walk (eg. ['n', 's', 'w', 'e']).
You always walk only a single block for each letter (direction) and you know it takes you one minute to traverse one city block,
so create a function that will return true if the walk the app gives you will take you exactly ten minutes (you don't want to be early or late!) and will,
of course, return you to your starting point. Return false otherwise.

	Note: you will always receive a valid array containing a random assortment of direction letters ('n', 's', 'e', or 'w' only).
	It will never give you an empty array (that's not a walk, that's standing still!).

*/