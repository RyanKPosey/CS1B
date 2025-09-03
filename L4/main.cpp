#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void read2DIntArray(int[3][4] matrix, size_t x1Size, size_t x2Size) {
	for(int i = 0; i < x1Size; i++) { // Rows
		for (int i2 = 0; i2 < x2Size; i++) { // Get user input for each coordinate
			matrix[i][i2] = (i+1)*(i2+1); // The same as (r+1)*(c+1)
		}
	}
}

vector<int> get2DArrayRowSums(int[3][4] matrix, size_t x1Size, size_t x2Size) {
	vector<int> rowSums = {};
	for(int i = 0; i < x1Size; i++) { // Rows
		int rowSum = 0;
		for (int i2 = 0; i2 < x2Size; i++) { // Get user input for each coordinate
			rowSum += matrix[i][i2];
		}
		
		rowSums.push_back(rowSum);
		cout << "\nSum for row " << i+1 << " :" << rowSum;
	}

	return rowSums; // Return row sums instead of only printing them
}

vector<int> get2DArrayColumnSums(int[3][4] matrix, size_t x1Size, size_t x2Size) {
	vector<int> columnSums = {};
	for(int i = 0; i <= x2Size; i++) { // Columns
		int columnSum = 0;
		for (int i2 = 0; i2 < x1Size; i++) { // Get user input for each coordinate
			columnSum += matrix[i][i2];
		}
		columnSums.push_back(columnSum);
		cout << "\nSum for column " << i << " :" << columnSum;
	}

	return columnSums; // Return column sums instead of only printing them
}

void print2DIntArray(int[3][4], size_t x1Size, size_t x2Size) {
	for(int i = 0; i <= x1Size; i++) { // Rows
		for (int i2 = 0; i2 < x2Size; i++) { // Columns
			cout << matrix[i][i2] << "\t";
		}
		cout << endl;
	}
}


int main() {
	const int ROWS = 3, COLUMNS = 4;
	int matrix[ROWS][COLUMNS];
	
	read2DIntArray(matrix, ROWS, COLUMNS); // Read array
	print2DIntArray(matrix, ROWS, COLUMNS);
	vector<int> rowSums = get2DArrayRowSums(matrix, ROWS, COLUMNS);
	vector<int> columnSums = get2DArrayColumnSums(matrix, ROWS, COLUMNS);
}
