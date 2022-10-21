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
	bool g_flag = false;
	cout << fixed << setprecision (3);
	
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
			//Calculation
				cout << "Enter two numbers separated with a space: ";
				cin >> firstNum >> secondNum;
				g_flag = true;
				break;
				
			//Addition
            case 'A':
            case 'a':
				if (g_flag == false)
				{
					cout << "Error: Please select option G from the menu first!\n";
				} else
					cout << "The sum is: " << firstNum + secondNum << ".\n";
			break;
				
			//Subtraction
			case 'S':
			case 's':
                if (g_flag == false)
                {
                    cout << "Error: Please select option G from the menu first!\n";
                } else
                    cout << "The difference is: " << firstNum - secondNum << ".\n";
				break;
				
			//Multiplication
			case 'M':
			case 'm':
                if (g_flag == false)
                {
                    cout << "Error: Please select option G from the menu first!\n";
                } else
                    cout << "The product is " << firstNum * secondNum << ".\n";
				break;
				
			//Division
			case 'D':
			case 'd':
                if (g_flag == false)
                {
                    cout << "Error: Please select option G from the menu first!\n";
                } else if (firstNum == 0 || secondNum == 0)
				{
					cout << "Error: Cannot divide by zero!\n";
				} else
					cout << "The quotient is " << firstNum / secondNum << ".\n";
				break;
				
			//Average
			case 'V':
			case 'v':
                if (g_flag == false)
                {
                    cout << "Error: Please select option G from the menu first!\n";
                } else
                    cout << "The average is " << (firstNum + secondNum) / 2 << ".\n";
				break;
				
			//Largest
			case 'L':
			case 'l':
                if (g_flag == false)
                {
                    cout << "Error: Please select option G from the menu first!\n";
                } else if (firstNum > secondNum)
				{
					cout << "The largest number is " << firstNum << ".\n";
				} else
					cout << "The largest number is " << secondNum << ".\n";
				break;
				
			//Smallest
			case 'E':
			case 'e':
                if (g_flag == false)
                {
                    cout << "Error: Please select option G from the menu first!\n";
                } else if (firstNum < secondNum)
				{
					cout << "The smallest number is " << firstNum << ".\n";
				} else
					cout << "The smallest number is " << secondNum << ".\n";
				break;
				
			//Positive, Negative, Zero
			case 'P':
			case 'p':
                if (g_flag == false)
                {
                    cout << "Error: Please select option G from the menu first!\n";
                //First Number
                } else if (firstNum == 0)
                {
                    cout << "The first number is zero.\n";
                } else if (firstNum > 0)
					{
                    cout << "The first number (" << firstNum << ") is positive.\n";
					} else
                    {
                    cout << "The first number (" << firstNum << ") is negative.\n";
                    }
				//Second Number
                if (g_flag == false)
                {
                    cout << "Error: Please select option G from the menu first!\n";
                } else if (secondNum == 0)
				{
					cout << "The second number is zero.\n";
				} else if (secondNum > 0)
					{
                    cout << "The second number (" << secondNum << ") is positive.\n";
					} else
                    {
                    cout << "The second number (" <<  secondNum << ") is negative.\n";
					}
				break;
				
			//Exit
			case 'X':
			case 'x':
				cout << "Thank you for using Team 4's calculator! Good-bye!\n";
				break;
				
			//Error Message
			default:
				cout << "Error: Invalid choice!\n";
				break;
		}
	} while (userOption != 'X' && userOption != 'x');

	return 0;
}
