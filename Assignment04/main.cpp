#include "SelectionSort.h" 
#include "InsertionSort.h" 
#include "MergeSort.h" 
#include "BubbleSort.h"
#include <iostream>
using namespace std;

int main()
{
	int arr[] = { 14,33,27,10,35,19,48,44 };
	SelectionSort number;
	number.SelectionSorter(arr, 8);
	cout << "Sorted array: " << endl;
	number.printArray(arr, 8);

	InsertionSort num;
	num.InsertionSorter(arr, 8);
	cout << "Sorted array: " << endl;
	num.printArray(arr, 8);

	
	MergeSort num1;
	num1.MergeSorter(arr, 8);
	cout << "Sorted array: " << endl;
	num1.printArray(arr, 8);

	BubbleSort num2;
	num2.BubbleSorter(arr, 8);
	cout << "Sorted array: " << endl;
	num2.printArray(arr, 8);

    return 0;
}
