#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
int angle(int n) {
	return (n - 2) * 180;
}
int main() {
	cout << angle(8);
	return 0;
}
/*Description:

Find the total sum of internal angles (in degrees) in an n-sided simple polygon. N will be greater than 2.
Geometry
Fundamentals*/