/***********************/
/* Minimum Stylesheet:
/* Programmer: Ryan Posey
/* Assignment: L2
/* Purpose: Add 5 to each integer when given an array
/* Due Date: 8/28/2025
/***********************/

#include <iostream>
#include <array>

using namespace std;

int add5ToScore(int score) {
	if (score + 5 > 100) { // If adjusted score is above 100
		score = 100; // Set score to 100
		return score;
	}
		
	
	return score + 5; // Add 5 to score
}

int main() {
	array<int, 10> scores{}; // Init array

	cout << "\nEnter 10 scores: ";

	for (auto& n : scores) { // Get input from user for array values
		cin >> n;
	}
	
	cout << "\nBefore:\n"; // Print array values
	for (auto& n : scores) {
		cout << n << ",\n";
		n = add5ToScore(n); // Set element to return value of function
	};
	
	cout << "\nAfter:\n";
	for (auto n : scores) { // Print modified array values
		cout << n << ",\n";
	}
}

