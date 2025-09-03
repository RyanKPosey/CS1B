/***********************/
/* Minimum Stylesheet:
/* Programmer: Ryan Posey
/* Assignment: L3
/* Purpose: Store and report GPA data
/* Due Date: 9/2/2025
/***********************/

#include <iostream>
#include <vector>

using std::string, std::cout, std::cin, std::vector, std::endl, std::vector;

double getAverage(vector<double> vector) {
	double vectorTotal = 0;

	for(int i = 0; i < vector.size(); i++) {
		vectorTotal += vector.at(i);
	}

	return (double)vectorTotal/vector.size(); // average is all the elements combined divided by vector length
}

int main() {
	const int USER_COUNT = 5;
	
	// Init vectors

	vector<int> ids = {};
	vector<string> names = {};
	vector<double> gpas = {};


	
	// Get user input
	ids.reserve(100); // Allocate space for vectors
	names.reserve(100);
	gpas.reserve(100);

	/*
	* Normally I would base this allocated space on the intended
	* size of the vector, which in this case is stored as the
	* vectorSize arg, but I'll use a literal since the directions
	* specify it.
	*/

	for(int i = 0; i < USER_COUNT; i++) { // Read values for vectors
		int id = 0;
		cout << "\nEnter id: ";
		cin >> id;
		ids.push_back(id);
	
		string name = "";
		cout << "\nEnter name: ";
		cin >> name;
		names.push_back(name);
	
		double gpa = 0;
		cout << "\nEnter gpa: ";
		cin >> gpa;
		gpas.push_back(gpa);
	}

	double averageGPA = getAverage(gpas); // Get Average GPA
	
	cout << "\nid\tname\tgpa\n";
	for(int i = 0; i < ids.size(); i++) { // Print corresponding values
		cout << ids.at(i) << "\t" << names.at(i) << "\t" << gpas.at(i) << "\t" << endl;
	}

	cout << "Average GPA: " << averageGPA << endl;
}
