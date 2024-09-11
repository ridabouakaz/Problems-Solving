#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include <string>
#include <sstream>
#include <climits>
#include<iomanip>
using namespace std;
vector<vector<int> > matrixAddition(vector<vector<int> > a, vector<vector<int> > b) {
	vector<vector<int> >result(3, vector<int>(3));
	if (a.size() == 0 || b.size() == 0 || a.size() != b.size() || a[0].size() != b[0].size()) {
		throw invalid_argument("Matrices must have the same dimensions and be non-empty");
	}

	int rows = a.size();
	int cols = a[0].size();
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			result[i][j] = a[i][j] + b[i][j];
		}
	}

	return result;
}
int main()
{
	vector<vector<int> >test1 = { { 1, 2, 3 }, { 3, 2 , 1 }, { 1, 1, 1 } };
	vector<vector<int> >test2 = { {2, 2, 1}, {3, 2, 3}, {1, 1, 3} };
	vector<vector<int> >resulttotal = matrixAddition(test1, test2);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << setw(3) << resulttotal[i][j] << "     ";
		}
	}

	return 0;
}
/*Description:

Write a function that accepts two square matrices (N x N two dimensional arrays),
and return the sum of the two.
Both matrices being passed into the function will be of size N x N (square),
containing only integers.

How to sum two matrices:

Take each cell [n][m] from the first matrix, and add it with the same [n][m] cell from the second matrix.
This will be cell [n][m] of the solution matrix.
(Except for C where solution matrix will be a 1d pseudo-multidimensional array).

Visualization:

|1 2 3|     |2 2 1|     |1+2 2+2 3+1|     |3 4 4|
|3 2 1|  +  |3 2 3|  =  |3+3 2+2 1+3|  =  |6 4 4|
|1 1 1|     |1 1 3|     |1+1 1+1 1+3|     |2 2 4|

Example

matrixAddition(
  [ [1, 2, 3],
	[3, 2, 1],
	[1, 1, 1] ],
//      +
  [ [2, 2, 1],
	[3, 2, 3],
	[1, 1, 3] ] )

// returns:
  [ [3, 4, 4],
	[6, 4, 4],
	[2, 2, 4] ]

Matrix
Arrays
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