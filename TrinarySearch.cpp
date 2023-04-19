#include "TrinarySearch.h"
#include <iostream>
#include <vector>

using namespace std;
/*
* Test functions for table
*/
void testOne() {
	vector<int> myVec;

	for (int i = 0; i < 10; i++) {
		myVec.push_back(i);
	}

	cout << endl;
	int size = myVec.size();

	printTable(size, myVec, 6);
}

void testTwo() {
	vector<int> myVec;

	for (int i = 0; i < 50; i++) {
		myVec.push_back(i);
	}

	cout << endl;
	int size = myVec.size();

	printTable(size, myVec, 15);
}

void testThree() {
	vector<int> myVec;

	for (int i = 0; i < 100; i++) {
		myVec.push_back(i);
	}

	cout << endl;
	int size = myVec.size();

	printTable(size, myVec, 22);
}

void testFour() {
	vector<int> myVec;

	for (int i = 0; i < 1000; i++) {
		myVec.push_back(i);
	}

	cout << endl;
	int size = myVec.size();

	printTable(size, myVec, 344);
}

void testFive() {
	vector<int> myVec;

	for (int i = 0; i < 10000; i++) {
		myVec.push_back(i);
	}

	cout << endl;
	int size = myVec.size();

	printTable(size, myVec, 344);
}

void testSix() {
	vector<int> myVec;

	for (int i = 0; i < 100000; i++) {
		myVec.push_back(i);
	}

	cout << endl;
	int size = myVec.size();

	printTable(size, myVec, 433);
}

void testSeven() {
	vector<int> myVec;

	for (int i = 0; i < 1000000; i++) {
		myVec.push_back(i);
	}

	cout << endl;
	int size = myVec.size();

	printTable(size, myVec, 234);
}

int main() {

	testOne();
	testTwo();
	testThree();
	testFour();
	testFive();
	testSix();
	testSeven();

	// return 0;
}