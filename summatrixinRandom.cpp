#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
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

	for (short j = 0; j <= Cols - 1; ++j)
	{
		sum += arr[number][j];
	}
	return sum;
}

void calculmatrix(int arr[3][3], short Rows, short Cols) {
	int num = 3;
	int* ptr;
	ptr = new int[num];
	for (short i = 0; i < Rows; i++)
	{
		*(ptr + i) = Rowsum(arr, i, Cols);
	}
	for (int i = 0; i < num; i++)
	{
		cout << "Row " << i + 1 << " Sum = " << *(ptr + i) << endl;
	}
	delete[]ptr;

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
/*Write a C++ program that generates a 3x3 matrix filled with random integers between 1 and 100. 
The program should calculate and display the sum of each row in the matrix.*/