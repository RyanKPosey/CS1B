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

void add5ToScores(array<int> scores) {
	for (auto i : scores.size()) {
		if (scores.at(i) + 5 > 100) { // If adjusted score is above 100
			scores.at(i) = 100; // Set score to 100
			continue; // Continue to next element
		}
		
		scores.at(i) += 5; // Add 5 to score
	}
}

int main() {
	array<int, 10> scores{}; // Init array

	cout << "\nEnter 10 scores: ";

	for (auto i : scores.size()) { // Get input from user for array values
		cin >> scores.at(i);
	}
	
	cout << "\nBefore:\n"; // Print array values
	for (auto i : scores.size()) {
		cout << i << " " << scores.at(i)
	};

	add5ToScores(scores); // Apply function to scores
	
	cout << "\nAfter:\n"
	for (auto i : scores.size()) { // Print modified array values
		cout << i << " " << scores.at(i);
	}
}

