#include "SelectionSort.h" 
#include <iostream>
using namespace std;

int main()
{
	int arr[] = { 14,33,27,10,35,19,48,44 };
	SelectionSort number;
	number.SelectionSorter(arr, 8);
	cout << "Sorted array: " << endl;
	number.printArray(arr, 8);
	return 0;
}