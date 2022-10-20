/*
 * File Name:		Calculator.cpp
 * Names:			Kevin Hinojo, Miguel Feliz, Derian Comas
 * Course:			COP 1000C at Valencia College
 * Professor:		David Stendel
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
 *					will be returned to the calling program or operating system.
 */
int main()
{
	// Constants and Variables
	float firstNum = 0.0;
	float secondNum = 0.0;
	char userOption;
	
	//Begnning of the Do-Loop
	do
	{
		
	//Main Menu
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
		
	//User's Input for the Main Menu
		cin >> userOption;
		cout << "\n";
		
	//Beginning of the Switch Statement
		switch (userOption)
		{
				
			//User's Input for the First and Second Number
			case 'G':
			case 'g':
				cout << "Enter two numbers separated with a space: ";
				cin >> firstNum >> secondNum;
				break;
				
			//Addition
			case 'A':
			case 'a':
				cout << fixed;
				//Calculation
				cout << "The sum is: " << setprecision (3) << firstNum + secondNum << ".\n";
				break;
				
			//Subtraction
			case 'S':
			case 's':
				cout << fixed;
				//Calculation
				cout << "The difference is: " << setprecision (3) << firstNum - secondNum << ".\n";
				break;
				
			//Multiplication
			case 'M':
			case 'm':
				cout << fixed;
				//Calculation
				cout << "The product is " << setprecision (3) << firstNum * secondNum << ".\n";
				break;
				
			//Division
			case 'D':
			case 'd':
				cout << fixed;
				//Calculation
				if (firstNum == 0 || secondNum == 0)
				{
					cout << "Error: Cannot divide by zero!\n";
				} else
					cout << "The quotient is " << setprecision (3) << firstNum / secondNum << ".\n";
				break;
				
			//Average
			case 'V':
			case 'v':
				cout << fixed;
				//Calculation
				cout << "The average is " << setprecision (3) << (firstNum + secondNum) / 2 << ".\n";
				break;
				
			//Largest
			case 'L':
			case 'l':
				cout <<
				fixed;
				//Validation
				if (firstNum > secondNum)
				{
					cout << "The largest number is " << setprecision (3) << firstNum << ".\n";
				} else
					cout << "The largest number is " << setprecision (3) << secondNum << ".\n";
				break;
				
			//Smallest
			case 'E':
			case 'e':
				cout << fixed;
				//Validation
				if (firstNum < secondNum)
				{
					cout << "The smallest number is " << setprecision (3) << firstNum << ".\n";
				} else
					cout << "The smallest number is " << setprecision (3) << secondNum << ".\n";
				break;
				
			//Positive, Negative, Zero
			case 'P':
			case 'p':
				cout << fixed;
				
				//Zero for first #
				if (firstNum == 0)
				{
					cout << "The first number is zero." << "./n";
				}
				
				//Positive for first #
				else if (firstNum > 0)
					{
						cout << "The first number (" << setprecision (3) << firstNum << ") is positive.\n";
					}
				
				//Negative for first #
					else
						{
						cout << "The first number (" << setprecision (3) << firstNum << ") is negative.\n";
						}
				
				//Zero for second #
				if (secondNum == 0)
				{
					cout << "The second number is zero." << "./n";
				}
				
				//Positive for second #
				else if (secondNum > 0)
					{
						cout << "The second number (" << setprecision (3) << secondNum << ") is positive.\n";
					}
				
				//Negative for second #
					else {
						cout << "The second number (" << setprecision (3) << secondNum << ") is negative.\n";
					}
				break;
				
			//Exit
			case 'X':
			case 'x':
				cout << "Thank you for using Team 4's calculator! Good-bye!\n";
				break;
				
			//Error Message
			default:
				cout << "Error: Please select option G from the menu first!\n";
		}
	//End of the Switch Statement
	//Repeating until X or x is selected
	} while (userOption != 'X' && userOption != 'x');
	//End of the Do-Loop



	return 0;
}
