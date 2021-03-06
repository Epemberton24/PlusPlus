// ElijahPembertonproj07.cpp : This file contains the 'main' function. Program execution begins and ends there.
// 11/5/18


#include "pch.h"
#include <iostream>
using namespace std;

void fill_array(int arr[], int size);
// pre-condition: The arr has actual size that is greater than or equal to size
// post-condition: arr[0], ..., arr[size-1] is filled from keyboard

void print_array(int arr[], int size);
// pre-condition: The arr has actual size that is greater than or equal to size
// post-condition: arr[0], ..., arr[size-1] is printed to screen with 5 elements per line
int linear_search(int arr[], int size, int key);
// pre-condition: arr has given size
// post-condition: The index of first occurrence of key in arr is returned. If

void select_sort(int arr[], int size);
// pre-condition: arr has given size
// post-condition: the elements in arr are rearranged from least to largest
void insert_sort(int arr[], int size);
// pre-condition: arr has given size
// post-condition: the elements in arr are rearranged from least to largest
void bubble_sort(int arr[], int size);
// pre-condition: arr has given size
// post-condition: the elements in arr are rearranged from least to largest

int main()
{
	int choice;
	int a[9];
	do {
		menu();
		cout << "Enter your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			fill_array(a, 9);
			cout << "Enter the key you want to search: ";
			int key;
			cin >> key;
			int index = linear_search(a, 9, key);
			if (index == -1)
				cout << "The key " << key << " is not in array\n";
			else
				cout << "The key " << key << " is #" << (index + 1) << "element in array\n";
				break;
		}
		case 2:
		{
			fill_array(a, 9);
			select_sort(a, 9);
			cout << "After sort, the array is:\n";
			print_array(a, 9);
			break;
		}
		case 3:
			
			{
				fill_array(a, 9);
				insert_sort(a, 9);
				cout << "After sort, the array is:\n";
				print_array(a, 9);
				break;
			}
		case 4:
		{
			fill_array(a, 9);
			bubble_sort(a, 9);
			cout << "After sort, the array is:\n";
			print_array(a, 9);
			break;
		}
		case 5:
		{
			cout << "Thank you for using the array functions\n";
			break;
		}
		default:
		{
			cout << "Wrong choice. Please choose from menu: ";
			break;
		}
		}
	} while (choice != 5);
	return 0;
}
void fill_array(int arr[], int size) //this will fill the array.
{
	int i;
	cout << "Enter array Elements" << endl;
	for (i = 0; i < size; i++) 
	{
		cout << "enter element " << i + 1 << " : ";
		cin >> arr[i];
	}
}

void print_array(int arr[], int size) //this will print the array.
{ int i; 
for (i = 0; i < size; i++) 
 { cout << arr[i] << "\t"; 
if (i % 5 == 4)cout << endl; 
 } 
}

int linear_search(int arr[], int size, int key) //this runs a linear search.
{
	int i; 
	for (i = 0; i < size; i++) 
	{ if (arr[i] == key)return i; }
	return -1;
}

void select_sort(int arr[], int size) //this is whats inside the selection sort.
{ int i, j; 
int min, temp; 
for (i = 0; i < size - 1; i++) 
{ min = i; for (j = i + 1; j < size; j++) 
{ if (arr[j] < arr[min])min = j; }
temp = arr[i]; arr[i] = arr[min]; arr[min] = temp; }
}

void insert_sort(int arr[], int size) //this is whats inside the insert sort method.
{ int i, j, index; 
for (i = 1; i < size; i++) 
{ index = arr[i]; j = i; 
while ((j > 0) && (arr[j - 1] > index)) 
{ arr[j] = arr[j - 1]; j = j - 1; }
arr[j] = index;} 
}

void bubble_sort(int arr[], int size) {//this is whats inside the bubble sort method.
	int i, j, temp; for (i = 0; i < size; i++) {
		for (j = 0; j < (size - 1 - i); j++) 
		{ if (arr[j + 1] < arr[j]) 
		{ temp = arr[j]; arr[j] = arr[j + 1]; arr[j + 1] = temp; } 
		}
	}
}

int menu() //this is whats inside the menu method.
{ cout << endl << "Sorting Program" << endl; 
char choices[5][100] = { "Search Element", "Selection Sort", "Insertion Sort", "Bubble Sort", "Exit" }; 
int i; 
 for (i = 0; i < 5; i++) 
 { cout << i + 1 << "." << choices[i] << endl; 
 } 
}
