/***********************/
/* Minimum Stylesheet:
/* Programmer: Ryan Posey
/* Assignment: L4
/* Purpose: Create matrix of integers
/* Due Date: 9/2/2025
/***********************/

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void read2DIntArray(int matrix[3][4], size_t x1Size, size_t x2Size) {
	for(int i = 0; i < x1Size; i++) { // Rows
		for (int i2 = 0; i2 < x2Size; i2++) { // Get user input for each coordinate
			matrix[i][i2] = (i+1)*(i2+1); // The same as (r+1)*(c+1)
		}
	}
}

void print2DArrayRowSums(int matrix[3][4], size_t x1Size, size_t x2Size) {
	for(int i = 0; i < x1Size; i++) { // Rows
		int rowSum = 0;
		for (int i2 = 0; i2 < x2Size; i2++) { // Add to row sum
			rowSum += matrix[i][i2];
		}
		
		cout << "\nSum for row " << i+1 << " :" << rowSum;
	}
    cout << endl;
}

void print2DArrayColumnSums(int matrix[3][4], size_t x1Size, size_t x2Size) {
	for(int i = 0; i < x2Size; i++) { // Columns
		int columnSum = 0;
		for (int i2 = 0; i2 < x1Size; i2++) {
            columnSum += matrix[i2][i]; // Add to column sum
		}
		cout << "\nSum for column " << i+1 << " :" << columnSum;
	}
    cout << endl;
}

void print2DIntArray(int matrix[3][4], size_t x1Size, size_t x2Size) {
	for(int i = 0; i < x1Size; i++) { // Rows
		for (int i2 = 0; i2 < x2Size; i2++) { // Columns
			cout << matrix[i][i2] << "\t";
		}
		cout << endl;
	}
}


int main() {
	const size_t ROWS = 3, COLUMNS = 4;
	int matrix[ROWS][COLUMNS];
	
	read2DIntArray(matrix, ROWS, COLUMNS); // Read array
	print2DIntArray(matrix, ROWS, COLUMNS);
	print2DArrayRowSums(matrix, ROWS, COLUMNS);
	print2DArrayColumnSums(matrix, ROWS, COLUMNS);
}
