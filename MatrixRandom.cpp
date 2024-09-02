#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int RandomNumber(int From, int To) {
	//Function to generate a random number
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}
void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols) {
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			arr[i][j] = RandomNumber(1, 100);
		}
	}
}
void PrintMatrix(int arr[3][3], short Rows, short Cols) {
	for (int i = 0; i < Rows; i++)
	{
		for (int j = 0; j < Cols; j++)
		{
			cout << setw(3) << arr[i][j] << "    ";
		}
		cout << "\n";
	}
}
int	main() {
	srand((unsigned)time(NULL));
	int arr[3][3];
	FillMatrixWithRandomNumbers(arr, 3, 3);
	cout << "\n The following is a 3x3 random matrix:\n";
	PrintMatrix(arr, 3, 3);
	system("pause>0");
}
/*Problem Statement: Generating and Displaying a Random Matrix

Objective:
You are required to create a C++ program that generates a 3x3 matrix
filled with random integers within a specified range and then displays this matrix in a formatted manner.

Tasks:

    Generate a Random Number:
        Write a function int RandomNumber(int From, int To) that takes two integers,From and To,
		as parameters and returns a random integer between these two values, inclusive.

    Fill the Matrix with Random Numbers:
        Implement a function void FillMatrixWithRandomNumbers(int arr[3][3], short Rows, short Cols) that fills a 3x3 matrix (arr) with random numbers. 
		The random numbers should be generated using the RandomNumber function, with values ranging from 1 to 100.

    Print the Matrix:
        Develop a function void PrintMatrix(int arr[3][3], short Rows, short Cols) that prints the matrix in a formatted manner,
		ensuring each number occupies 3 spaces and is followed by appropriate spacing for alignment.

    Main Program Flow:
        In the main() function, seed the random number generator using the current time,
		call the function to fill the matrix with random numbers, and then display the matrix using the print function.

Example Output:

arduino

The following is a 3x3 random matrix:
 17    85    42    
 92    56    73    
 10    66    38    

Note:

    You should use the rand() function to generate random numbers.
    Use the srand() function with time(NULL) to seed the random number 
	generator to ensure different results each time the program is run.
    The matrix is always 3x3, but your functions should be flexible to 
	handle matrices of different sizes if the dimensions are changed.*/