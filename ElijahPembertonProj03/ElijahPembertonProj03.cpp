// ElijahPembertonProj03.cpp : The purpose of this class is to have a user play a game of toothpicks with a computer. Your job is to try not to get the last toothpick or else you will lose.
//09/15/18
//ElijahPemberton

#include "pch.h"
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main() {

	
	//c_pick is the computer's choice while h_pick is the human choice




	int c_pick, h_pick;//c_pick stands for computer pick while h_pick stands for human pick.
	int toothpicks = 23;//this declares that there are 23 toothpicks.

	cout << "Welcome to the toothpick game." << endl;

	do {


		


		cout << "Please pick up your toothpick(s), choose between 1 and 3.\n";
		cin >> h_pick;//this records the users response.

		toothpicks = toothpicks - h_pick;//this subtracts the total toothpicks by the users response.
		cout << toothpicks << " toothpick(s) remaining" << endl;//this tells the user how many toothpicks are left.

		if (toothpicks == 1) {//if there is exactly one toothpick left then the human player wins.
			cout << "Human! You have prevailed!" << endl;
			
		}

		if (toothpicks > 4) {// if toothpicks is greater than 4 then the computer will pick 4 toothpicks minus the amount the player picked.
			c_pick = 4 - h_pick;
			cout << "The computer took " << c_pick << " toothpick(s)" << endl;
		}
		else if (toothpicks == 2) {//if there are 2 toothpicks left then the computer will pick out 1 toothpick
			c_pick = 1;
			cout << "The computer took " << c_pick << " toothpick(s)" << endl;
		}
		else if (toothpicks == 3) {//if there are 3 toothpicks then the computer will pick out 2 toothpicks.
			c_pick = 2;
			cout << "The computer took " << c_pick << " toothpick(s)" << endl;
		}
		else if (toothpicks == 4) {//if there are 4 toothpicks then the computer will pick out 3 toothpicks.
			c_pick = 3;
			cout << "The computer took " << c_pick << " toothpick(s)" << endl;
		}
		else if (toothpicks == 1) {// If there is one toothpick left then the computer will take it.
			c_pick = 1;
			
		}

		toothpicks = toothpicks - c_pick; //thia will print out the amount of toothpicks the computer takes.
		cout << toothpicks << " toothpick(s) remaining" << endl;

		if (toothpicks == 1) {//if there is exactly one toothpick left then the computer will take it and lose the game.
			cout << "The computer has prevailed!" << endl;
			toothpicks = 0;

		}

		if (h_pick > 3 || h_pick < 0)//if the human player doesnt pick a number between 0 and 3 then the player will get an error.
		{
			cout << "Please enter a correct value." << endl;

			continue;
		}

		if (toothpicks == 0) {
			cout << "Press any number to restart. (press 4 to quit)" << endl;//This will allow the user the option to contunue playing the game or quit the game.
			cin >> h_pick;
			toothpicks = 23;
			continue;
		}

	} while (h_pick != 4);//this loop will continue until the player decides to quit the game

	return 0;
}