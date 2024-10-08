﻿#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <string_view>
using namespace std;
vector<vector<int>> matrix_multiplication(vector<vector<int>>& a, vector<vector<int>>& b, size_t n) {
	vector<vector<int>> c(n, vector<int>(n, 0));
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			c[i][j] += a[i][j] * b[j][i];
		}
	}
	return c;
}
int main()
{
	vector<vector<int>> A = { {1, 2}, {3, 2} };
	vector<vector<int>> B = { {3, 2}, {1, 1} };
	size_t n = 2;
	matrix_multiplication(A, B, n);
}
/*Description:

Write a function that accepts two square (NxN) matrices (two dimensional arrays), and returns the product of the two.
Only square matrices will be given.

How to multiply two square matrices:

We are given two matrices, A and B, of size 2x2 (note: tests are not limited to 2x2). Matrix C, the solution,
will be equal to the product of A and B. To fill in cell [0][0] of matrix C,
you need to compute: A[0][0] * B[0][0] + A[0][1] * B[1][0].

More general: To fill in cell [n][m] of matrix C, you need to first multiply the elements in the nth row of matrix A by the elements in the mth column of matrix B,
then take the sum of all those products. This will give you the value for cell [m][n] in matrix C.
Example

  A         B          C
|1 2|  x  |3 2|  =  | 5 4|
|3 2|     |1 1|     |11 8|

Detailed calculation:

C[0][0] = A[0][0] * B[0][0] + A[0][1] * B[1][0] = 1*3 + 2*1 =  5
C[0][1] = A[0][0] * B[0][1] + A[0][1] * B[1][1] = 1*2 + 2*1 =  4
C[1][0] = A[1][0] * B[0][0] + A[1][1] * B[1][0] = 3*3 + 2*1 = 11
C[1][1] = A[1][0] * B[0][1] + A[1][1] * B[1][1] = 3*2 + 2*1 =  8

Link to Wikipedia explaining matrix multiplication (look at the square matrix example): http://en.wikipedia.org/wiki/Matrix_multiplication

A more visual explanation of matrix multiplication: http://matrixmultiplication.xyz
Matrix
Linear Algebra
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