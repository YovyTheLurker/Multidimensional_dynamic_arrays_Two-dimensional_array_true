// Multidimensional_dynamic_arrays_Two-dimensional_array_true.cpp : This file contains the 'main' function. Program execution begins and ends there.
//arrays of arrays.

#include <iostream>
using namespace std;

int main()
{
	int rows, cols;
	cout << "rows, cols: ";
	cin >> rows >> cols;

	int** table = new int*[rows];
	for (int i = 0; i < rows; i++) {
		table[i] = new int[cols];
	}
	table[1][2] = 88;
	//cout << table[1][2];
	for (int i = 0; i < rows; i++) {
		delete[] table[i];
	}
	delete[] table;
	table = NULL;

	system("pause>0");
}


