// ElijahPembertonProj04.cpp :
// Date:10/2/18
/* The purpose of this is to take a depth in kilometers inside the earth as input dataand then calculate and display
the temperature at this depth in both degrees Celsius and degree Fahrenheit.
 CSCI 121 Computer Science */


#include "pch.h"
#include <iostream>

using namespace std;

double depth;

void print_introduction();
// this prints out basic information to tell user what the program does

double celsius_at_depth(double depth);
//this will calculate and returns the celsius temperature at a depth measured in kilometers

double celsius_to_fahrenheit(double celsius_at_depth);
// this will convert celsius temperature to fahrenheit

void print_conclusion();
// this will display the conclusion of what temperature is in fahrenheit at that depth of earth


int main()
{
	// this is created in order to recieve a users response on weather or not they want to continue the loop
	char user_response;


	// this do while loop will continue until a condition is meet.
	do {
		// print introduction by call print_introduction function
		print_introduction();

		//this will ask the user to enter depth
		cout << "What is the depth in kilometers?\n";

		// this records the users repsonse
		cin >> depth;

		//print conclusion by call print_conclusion function
		print_conclusion();

		// this will ask the user if they want to to do again
		cout << "\nWould you like to run the program again? Y or N?\n";

		// this records th users response
		cin >> user_response;
		
		//this loop will continue if the user enters 'Y' or 'y'
	} while (user_response == 'Y' || user_response == 'y');


}

// write the print_introduction function
void print_introduction() {

	cout << "This program will take a depth of the earth and tell you what the" << endl;
	cout << "temperature is at that depth in both celsius and fahrenheit." << endl;
	cout << endl;  cout << endl;

}

// function to calculate temp in celsius based on user depth input
double celsius_at_depth(double depthh) {

	return ((10 * depthh) + 20);
}

// function calculate fahrenheit temperature, converts celsius to fahrenheit
double celsius_to_fahrenheit(double celcius) {

	return ((1.8 * celcius) + 32);
}

// the conclusion printing function
void print_conclusion() {

	cout << "The temperature at " << depth << "km is " << celsius_at_depth(depth) << " degrees Celsius," << endl;
	cout << "or " << celsius_to_fahrenheit(celsius_at_depth(depth)) << " degrees Fahrenheit.";
}