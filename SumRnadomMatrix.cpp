#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
/*

}*/

int RandomNumber(int From, int To) {
	// Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}

void PrintMatrix(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++) {
		for (short j = 0; j < Cols; j++) {
			cout << setw(3) << arr[i][j] << "    ";
		}
		cout << "\n";
	}
}
int Rowsum(int arr[3][3], short number, short Cols) {
	int sum = 0;
	for (short j = 0; j <= Cols - 1; j++)
	{
		sum += arr[number][j];
	}
	return sum;
}
void calculmatrix(int arr[3][3], short Rows, short Cols) {
	for (short i = 0; i < Rows; i++)
	{
		cout << "Row " << i + 1 << " Sum = " << Rowsum(arr, i, Cols) << endl;
	}
}

int main() {
	// Seeds the random number generator in C++, called only once 
	srand((unsigned)time(NULL));

	int arr[3][3];
	FillMatrixWithRandomNumbers(arr, 3, 3);

	cout << "\nThe following is a 3x3 random matrix:\n";
	PrintMatrix(arr, 3, 3);

	cout << "\nThe following are the sum of each row in the matrix:\n";
	calculmatrix(arr, 3, 3);
	system("pause>0");

	return 0;
}
/*Problem Description:

You are tasked with creating a program that generates a 3x3 matrix filled with random numbers and then computes the sum of each row. The matrix should be displayed, followed by the sum of the elements in each row.
Steps:

	Generate Random Numbers for the Matrix:
		You need to generate random numbers between 1 and 100 to fill a 3x3 matrix.
		Use the srand function to seed the random number generator with the current time to ensure that each run of the program produces different numbers.

	Fill the Matrix:
		Populate the 3x3 matrix with these random numbers.

	Print the Matrix:
		Display the matrix in a formatted manner using setw to align the numbers neatly.

	Calculate and Print Row Sums:
		Compute the sum of the numbers in each row of the matrix.
		Print the sum for each row.

Example Output:

mathematica

The following is a 3x3 random matrix:
 25    50    75
 10    20    30
 40    60    80

The following are the sum of each row in the matrix:
Row 1 Sum = 150
Row 2 Sum = 60
Row 3 Sum = 180*/