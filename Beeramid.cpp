#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <string_view>
using namespace std;
/*قال الله تعالى: (يا أيها الذين آمنوا إنما الخمر والميسر والأنصاب والأزلام رجس من عمل الشيطان فاجتنبوه لعلكم تفلحون*
إنما يريد الشيطان أن يوقع بينكم العداوة والبغضاء في الخمر والميسر ويصدكم عن ذكر الله وعن الصلاة فهل أنتم منتهون)
[المائدة:90-91]*/
int beeramid(int bonus, double price) {
	int temp = 0;
	int Numberbeer = bonus / price;
	int countbeer = 0;
	for (int i = 1; i < 100; i++)
	{
		temp = i * i;
		if (temp <= Numberbeer)
		{
			countbeer++;
			Numberbeer = Numberbeer - temp;
		}
		else
		{
			break;
		}
	}
	return countbeer;
}
int main()
{
	cout << beeramid(5000, 3);     // 3    return 0;
}
/*Description:

Let's pretend your company just hired your friend from college and paid you a referral bonus. Awesome! To celebrate,
you're taking your team out to the terrible dive bar next door and using the referral bonus to buy, and build,
the largest three-dimensional beer can pyramid you can. And then probably drink those beers, because let's pretend it's Friday too.

A beer can pyramid will square the number of cans in each level - 1 can in the top level, 4 in the second, 9 in the next, 16, 25...

Complete the beeramid function to return the number of complete levels of a beer can pyramid you can make, given the parameters of:

	your referral bonus, and

	the price of a beer can

For example:

beeramid(1500, 2); // should === 12
beeramid(5000, 3); // should === 16

Mathematics
Algorithms*/
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