/*
 * File Name:		Calculator.cpp
 * Names:			Kevin Hinojo, Miguel Feliz, and Derian Comas.
 * Course:			COP 1000C at Valencia College
 * Professor:		David Stendel
 * Description:		This program will create a Calculator for the user to control using intergers
 * Date:			10/21/2022
 */

//Preprocessor Directives
#include <iostream>
#include <iomanip>
using namespace std;

/*
 * Name:			main()
 * Parameters:		None.
 * Processes:		This will display a useable calculator that will allow the user to grab two 
                    Integers and Add, Subtract, Multiply, Divide, Average, Find the 
                    Largest & Smallest numbers, As well as the Positive, Negative, or zero.
 * Return Value:	An integer representing an error code; if the program ends without error, zero.
 *					will be returned to the calling program or operating system.
 */
int main()
{
	// Constants and Variables]
	const int COUNT = 2;
	double firstNum = 0.0;
	double secondNum = 0.0;
	double answer = 0.0;
	char userOption = '\0';
	bool numbersGotten = false;

	// Output - Formatting
	cout << fixed << setprecision(3);

	// Calculator
	do
	{
		// Input - Menu Choice
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
		cout << "e(X)it.\n\n";
		cout << "Choice: ";
		cin >> userOption ;

		// Menu Choice - Processing
		switch (userOption)
		{
		// New Numbers
		case 'G':
		case 'g':

			// Validation
			numbersGotten = true;

			// Output
			cout << "\nEnter two numbers separated with a space: ";

			// Input
			cin >> firstNum >> secondNum;
			break;

		// Addition
		case 'A':
		case 'a':
			// Validation
			if (numbersGotten == true)
			{
				// Calculation
				answer = firstNum + secondNum;

				// Output
				cout << "\nThe sum is: " << answer << ".\n";
			}
			else
			{
				// Error
				cout << "\n\tError: Please select option G from the menu first!\n";
			}
			break;

		// Subtraction
		case 'S':
		case 's':
			// Validation
			if (numbersGotten == true)
			{
				// Calculation
				answer = firstNum - secondNum;

				// Output
				cout << "\nThe difference is: " << answer << ".\n";
			}
			else
			{
				// Error
				cout << "\n\tError: Please select option G from the menu first!\n";
			}
			break;

		// Multiplication
		case 'M':
		case 'm':
			// Validation
			if (numbersGotten == true)
			{
				// Calculation
				answer = firstNum * secondNum;

				// Output
				cout << "\nThe product is " << answer << ".\n";
			}
			else
			{
				// Error
				cout << "\n\tError: Please select option G from the menu first!\n";
			}
			break;

		// Division
		case 'D':
		case 'd':
			//Validation
			if (numbersGotten == true)
			{
				if (secondNum != 0)
				{
					// Calculation
					answer = firstNum / secondNum;

					// Output
					cout << "\nThe quotient is " << answer << ".\n";
				}
				else
				{
					// Error
					cout << "\n\tError: Cannot divide by zero!\n";
				}
			}
			else
			{
				// Error
				cout << "\n\tError: Please select option G from the menu first!\n";
			}
			break;

		// Average
		case 'V':
		case 'v':
			// Validation
			if (numbersGotten == true)
			{
				// Calculation
				answer = (firstNum + secondNum) / COUNT;

				// Output
				cout << "\nThe average is " << answer << ".\n";
			}
			else
			{
				// Error
				cout << "\n\tError: Please select option G from the menu first!\n";
			}
			break;

		// Largest
		case 'L':
		case 'l':
			// Validation
			if (numbersGotten == true)
			{
				if (firstNum > secondNum)
				{
					// Output - Largest First Number
					cout << "\nThe largest number is " << firstNum << ".\n";
				}
				else
				{
					// Output - Largest Second Number
					cout << "\nThe largest number is " << secondNum << ".\n";
				}

			}
			else
			{
				// Error
				cout << "\n\tError: Please select option G from the menu first!\n";
			}
			break;

		// Smallest
		case 'E':
		case 'e':
			// Validation
			if (numbersGotten == true)
			{
				if (firstNum < secondNum)
				{
					// Output - Smallest First Number
					cout << "\nThe largest number is " << firstNum << ".\n";
				}
				else
				{
					// Output - Smallest Second Number
					cout << "\nThe largest number is " << secondNum << ".\n";
				}

			}
			else
			{
				// Error
				cout << "\n\tError: Please select option G from the menu first!\n";
			}
			break;

		// Positive, Negative, and Zero
		case 'P':
		case 'p':
			// Validation
			if (numbersGotten == true)
			{
				// Determination - First Number
				if (firstNum > 0)
				{
					// Output - Positive
					cout << "\nThe first number (" << firstNum << ") is positive.\n";
				}
				else
				{
					if (firstNum < 0)
					{
						// Output - Negative
						cout << "\nThe first number (" << firstNum << ") is negative.\n";
					}
					else
					{
						// Output - Zero
						cout << "\nThe first number is zero.\n";
					}
				}

				// Determination - Second Number
				if (secondNum > 0)
				{
					// Output - Positive
					cout << "\nThe first number (" << secondNum << ") is positive.\n";
				}
				else
				{
					if (secondNum < 0)
					{
						// Output - Negative
						cout << "\nThe first number (" << secondNum << ") is negative.\n";
					}
					else
					{
						// Output - Zero
						cout << "\nThe first number is zero.\n";
					}
				}
			}
			else
			{
				// Error
				cout << "\n\tError: Please select option G from the menu first!\n";
			}
			break;

		// Exit
		case 'X':
		case 'x':
			// Output
			cout << "\nThank you for using Team 4's calculator! Good-bye!\n";
			break;

		// Error Message
		default:
			// Output
			cout << "\n\tError: Invalid choice!\n";
			break;
		}
	} while (userOption != 'x' && userOption != 'X');

	return 0;
}
