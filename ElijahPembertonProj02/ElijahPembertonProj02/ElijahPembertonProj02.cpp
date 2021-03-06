/**
 * @The purpose of this class is to Determine the number of chocolate bars you need to eat in order to live.
 * @author Elijah Pemberton
 * @date 9/03/18
 */
#include "pch.h"
#include <iostream>
#include <cctype>
#include <limits>

int main()
{
	double weight = 0;//this declaring weight as a double.
	double height = 0;//this declaring height as a double.
	double age = 0;//this declaring age as a double.
	double bmr = 0;//this declaring bmr as a double.
	char gender = 'M';//this declaring gender as a character.
	double response = 0.0;

	// get input for weight, re-read input if not a number
	std::cout << "Enter the weight in pounds: ";
	while (!(std::cin >> weight))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid input.  Please enter a number: ";
	}
	// get input for height, if no number is entered then there will be an error until a number is entered.
	std::cout << "Enter the height in inches: ";
	while (!(std::cin >> height))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid input.  Please enter a number: ";
	}
	// get input for age and will re-read the input if its not a number
	std::cout << "Enter your age: ";
	while (!(std::cin >> age))
	{
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cout << "Invalid input.  Please enter a number: ";
	}
	
	
	// This loop wil as a user to enter their gender and wont stop looping until the user enters the correct gender.
	while (response == 0.0)//this loop will continue until the user enters M or F in the terminal.
	{
		std::cout << " Enter your gender. Press M for MALE or press F for FEMALE. (M/F): ";
		std::cin >> gender;
		
		if ('M' == gender)
		{
			bmr = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);// this is the BMR equation for males.
			response = 0.1;
		}
		else if ('F' == gender)
		{
			bmr = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);// this is the BMR equation for females.
			response = 0.1;
		}
		else
		{
			std::cout << "Wrong gender input. Please enter again." << std::endl;//this will ask the user to enter the correct input
		}
	}

	

	if ('M' == gender)
	{
		bmr = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);// this is the BMR equation for males.
	}
	else if ('F' == gender)
	{
		bmr = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);// this is the BMR equation for females.
	}

	const double numBars = bmr / 230; // this will divide by the number of calories in a chocolate bar
	std::cout << "The person with the entered metrics is allowed to consume " << numBars << " bars of chocolate." << std::endl;
}


