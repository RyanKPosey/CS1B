/***********************/
/* Minimum Stylesheet:
/* Programmer: Ryan Posey
/* Assignment: L3
/* Purpose: Store and report GPA data
/* Due Date: 9/2/2025
/***********************/

#include <iostream>
#include <vector>

using std::string, std::cout, std::cin, std::vector;

void populateArrayWithIntegers(vector<int> vector, int vectorSize) {
	vector.reserve(100);
 	/*
	* Normally I would base this allocated space on the intended
	* size of the vector, which in this case is stored as the
	* vectorSize arg, but I'll use a literal since the directions
	* specify it.
	*/

	for(int i = 0; i < vectorSize; i++) { // Populate the array with integers
		vector.at(i) = i;
	}
}

template<typename T>;
/* 
* 	A little out of the scope of this lesson, but I wanted to see if I could do this
* 	without making separate functions based on the data type of the vector elements
*/
void getCorrespondingVectorInput(vector<T> vector, vector<T> referenceVector) {
	vector.reserve(100); // Same thing as mentioned in populateArrayWithIntegers()

	for(int i = 0; i < referenceVector.size(); i++) {
		cout << "\nEnter value for " << referenceVector.at(i) /* to keep it simple as an easy reference */
			<< ": ";
		cin >> vector.at(i);
	}
}

double getAverage(vector<T> vector) {
/* I could use double here instead of T, but the arg could still be an int or float vector */ 
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

	populateArrayWithIntegers(ids, USER_COUNT); // Populate ids vector with USER_COUNT integers

	
	// Get user input

	cout << "Enter 5 names:\n";


	getCorrespondingVectorInput(names, ids);
	
	cout << "Enter 5 gpas:\n";

	getCorrespondingVectorInput(gpas, ids);

	double averageGPA = getAverage(gpas); // Get Average GPA
	
	cout << "\nid\tname\tgpa\n"
	for(int i = 0; i < ids.size; i++) { // Print corresponding values
		cout << ids.at(i) << "\t" << names.at(i) << "\t" << gpas.at(i) << "\t" << endl;
	}

	cout << "Average GPA: " << averageGPA << endl;
}
