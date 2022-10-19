/*
 * File Name:		Calculator.cpp
 * Names:			
 * Course:			
 * Professor:		
 * Description:		This program will create a Calculator for the user to control using intergers
 * Date:			9/18/20
 */

// Preprocessor Directives
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * Name:			main()
 * Parameters:		None.
 * Processes:		This will display a playable calculator uisng two intergers.
 * Return Value:	An integer representing an error code; if the program ends without error, zero
 *			will be returned to the calling program or operating system.
 */
int main()
{
	// Constants and Variables
	float firstNum = 0.0;
	float secondNum = 0.0;
	char userOption;
	
	//Main Menu
	do
	{
		cout << "\nCalculator Menu\n\n";
		cout << "(G)et two numbers.\n";
		cout << "(A)dd.\n";
		cout << "(S)ubtract.\n";
		cout << "(M)ultiply.\n";
		cout << "(D)ivide.\n";
		cout << "a(V)erage.\n";
		cout << "(L)argest.\n";
		cout << "small(E)st.\n";
		cout << "(P)ositive, negative, or zero.\n";
		cout << "e(X)it.\n";
		cout << "\nChoice: ";
		cin >> userOption;
		cout << "\n";
		switch (userOption)
		{
			case 'G':
			case 'g':
				cout << "Enter two numbers separated with a space: ";
				cin >> firstNum >> secondNum;
				break;
			case 'A':
			case 'a':
				cout << fixed;
				cout << "The sum is: " << setprecision (3) << firstNum + secondNum << ".\n";
				break;
			case 'S':
			case 's':
				cout << fixed;
				cout << "The difference is: " << setprecision (3) << firstNum - secondNum << ".\n";
				break;
			case 'M':
			case 'm':
				cout << fixed;
				cout << "The product is " << setprecision (3) << firstNum * secondNum << ".\n";
				break;
			case 'D':
			case 'd':
				cout << fixed;
				if (firstNum == 0 || secondNum == 0)
				{
					cout << "Error: Cannot divide by zero!\n";
				} else
					cout << "The quotient is " << setprecision (3) << firstNum / secondNum << ".\n";
				break;
			case 'V':
			case 'v':
				cout << fixed;
				cout << "The average is " << setprecision (3) << (firstNum + secondNum) / 2 << ".\n";
				break;
			case 'L':
			case 'l':
				if (firstNum > secondNum)
				{
					cout << "The largest number is " << setprecision (3) << firstNum << ".\n";
				} else
					cout << "The largest number is " << setprecision (3) << secondNum << ".\n";
				break;
			case 'E':
			case 'e':
				cout << fixed;
				if (firstNum < secondNum)
				{
					cout << "The smallest number is " << setprecision (3) << firstNum << ".\n";
				} else
					cout << "The smallest number is " << setprecision (3) << secondNum << ".\n";
				break;
			case 'P':
			case 'p':
				cout << fixed;
				if (firstNum == 0)
				{
					cout << "The first number is zero." << "./n";
				}
				else if (firstNum > 0)
					{
						cout << "The first number (" << setprecision (3) << firstNum << ") is positive.\n";
					}
					else
						{
						cout << "The first number (" << setprecision (3) << firstNum << ") is negative.\n";
						}
		
				if (secondNum == 0)
				{
					cout << "The second number is zero." << "./n";
				}
				else if (secondNum > 0)
					{
						cout << "The second number (" << setprecision (3) << secondNum << ") is positive.\n";
					}
					else {
						cout << "The second number (" << setprecision (3) << secondNum << ") is negative.\n";
					}
				break;
			case 'X':
			case 'x':
				cout << "Thank you for using Team 4's calculator! Good-bye!\n";
				break;
			default:
				cout << "Error: Please select option G from the menu first!\n";
		}
	} while (userOption != 'X' && userOption != 'x');


	return 0;
}
