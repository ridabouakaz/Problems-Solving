#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;
string is_sorted_and_how(vector<int> array) {
    bool ascending = true;
    bool descending = true;

    for (int i = 1; i < array.size(); i++) {
        if (array[i] > array[i - 1]) {
            descending = false;
        }
        if (array[i] < array[i - 1]) {
            ascending = false;
        }
    }

    if (ascending) return "yes, ascending";
    if (descending) return "yes, descending";
    return "no";
}
int main() {
    cout << is_sorted_and_how({ 15, 7, 3, -8 });
    return 0;
}
/*Description:

Complete the method which accepts an array of integers, and returns one of the following:

    "yes, ascending" - if the numbers in the array are sorted in an ascending order
    "yes, descending" - if the numbers in the array are sorted in a descending order
    "no" - otherwise

You can assume the array will always be valid, and there will always be one correct answer.
Arrays
Sorting
Fundamentals*/