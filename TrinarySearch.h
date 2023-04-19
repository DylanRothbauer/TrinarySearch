#pragma once
/*
* Dylan Rothbauer
* Trinary Search
* 
* CHANGE LOG:
* 4/18/23 - Dylan Rothbauer - added git commands to master
* 4/18/23 - Dylan Rothbauer - added comments above funtion implementations
* 4/19/23 - Dylan R - added git
*/
#include <iostream>
#include <vector>

using namespace std;

/*
* Binary Search
*/
int binarySearch(vector<int>& vec, int target) {
    int count = 0; // using a counter for steps
    int left = 0; // at the start of the vector
    int right = vec.size() - 1; // at the end of the vector

    while (left <= right) {
        int mid = left + (right - left) / 2;
        count++;
        if (vec[mid] == target) { 
            cout << "BINARY SEARCH STEPS: " << count << endl;
            return mid;
        }
        else if (vec[mid] < target) { // left becomes mid + 1 (because we already checked if mid was the target
            left = mid + 1; 
        }
        else { // otherwise, the right becomes mid - 1
            right = mid - 1;
        }
    }
    cout << "BINARY SEARCH STEPS: " << count << endl;
    return -1;  // target not found
}

/*
* Trinary Search
*/
int trinarySearch(vector<int>& vec, int target) {
    int count = 0; // using a counter for steps
    int left = 0;
    int right = vec.size() - 1;

    while (left <= right) {
        int oneThird = left + (right - left) / 3;
        int twoThirds = right - (right - left) / 3;
        count += 2;
        if (vec[oneThird] == target) {
            cout << "TRINARY SEARCH STEPS: " << count << endl;
            return oneThird;
        }
        else if (vec[twoThirds] == target) {
            cout << "TRINARY SEARCH STEPS: " << count << endl;
            return twoThirds;
        }
        else if (target < vec[oneThird]) {
            right = oneThird - 1;
        }
        else if (target > vec[twoThirds]) {
            left = twoThirds + 1;
        }
        else {
            left = oneThird + 1;
            right = twoThirds - 1;
        }
    }
    cout << "TRINARY SEARCH STEPS: " << count << endl;
    return -1;  // not found
}

// Visual for main (table)
// FOR TESTING...
void printTable(int size, vector<int> myVec, int target) {
    cout << "INPUT SIZE: " << size << endl;
    binarySearch(myVec, target);
    trinarySearch(myVec, target);
}