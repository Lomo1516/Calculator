/*
 * File Name:		
 * Names:			Kevin Hinojo, Miguel Feliz, Derian Comas
 * Course:			COP 1000C at Valencia College
 * Professor:		David Stendel
 * Description:		With this Program you are allowed to gather numbers and use them within a
 *                  functioning calculator that allows you to Add, Subtract, Multiply, Divide,
 *                  find the average, as well as display the Max or Min between a few numbers.
 *                  It also allows for you to determin if the numbers inputed were Positive,
					Negative, or Zero.
 * Date:			12/4/22
 */

 // Preprocessor Directives
#include <iostream>
#include <iomanip>
using namespace std;

// Prototypes
double add(double userInputs[], int size)
{
	// Variables
	double sum = userInputs[0];

	// Calculations
	for (int i = 1; i < size; i++)
	{
		sum += userInputs[i];
	}
	return sum;
}
// Prototypes
double average(double userInputs[], int size)
{
	// Calculations
	double answer = add(userInputs, size) / size;
	return answer;
}
// Detecting 
void detectingValues(double userInputs[], int size)
{
	// Variables
	double positive = 0.0;
	double negative = 0.0;
	double zero = 0.0;

	for (int i = 0; size > i; i++)
	{
		// Input - Postive
		if (userInputs[i] > 0.0)
		{
			positive = userInputs[i];
			cout << "The number " << positive << ", which is in position "
				<< i + 1 << ", is positive.\n";
		}
		else
		{
			// Input - Negative
			if (userInputs[i] < 0.0)
			{
				negative = userInputs[i];
				cout << "The number " << negative << ", which is in position "
					<< i + 1 << ", is negative.\n";
			}
			else
			{
				// Input - Zero
				zero = userInputs[i];
				cout << "The number " << zero << ", which is in position "
					<< i + 1 << ", is zero.\n";
			}
		}
	}
}
// Detecting for zero
bool detection(double userInputs[], int size)
{
	// Variables
	bool detectedZero = false;

	for (int i = 1; i < size; i++)
	{
		// Input
		if (userInputs[i] == 0)
		{
			detectedZero = true;
		}
	}

	return detectedZero;
}
// Display
void displayAnswer(double userInputs[], int size, char signOperator, double answer)
{
	// Output
	cout << "\nAnswer: " << userInputs[0];
	for (int i = 1; i < size; i++)
	{
		cout << " " << signOperator << " " << userInputs[i];
	}
	cout << " = " << answer << "\n";
}
// Display
void displayAverage(double userInputs[], int size, char signOperator, double answer)
{
	// Ouput
	cout << "\nAnswer: (" << userInputs[0];
	for (int i = 1; i < size; i++)
	{
		cout << " " << signOperator << " " << userInputs[i];
	}
	cout << ") / " << size << " = " << answer << "\n";
}
// Display
void displayMax(double answer)
{
	// Output
	cout << "\nThe largest number is " << answer << ".\n";
}
// Display
void displayMin(double answer)
{
	// Output
	cout << "\nThe smallest number is " << answer << ".\n";
}
// Prototypes
double division(double userInputs[], int size)
{
	// Variables
	double quotient = userInputs[0];

	// Calculations
	for (int i = 1; i < size; i++)
	{
		quotient /= userInputs[i];
	}
	return quotient;
}
// Main menu
char getChoice()
{
	char userChoice = '\0';
	// Output
	cout << "\n\tCalculator Menu\n\n";
	cout << "(N)ew Numbers\n";
	cout << "(S)um\n";
	cout << "(D)ifference\n";
	cout << "(P)roduct\n";
	cout << "(Q)uotient\n";
	cout << "(A)verage\n";
	cout << "(M)aximum\n";
	cout << "m(I)nimum\n";
	cout << "p(O)sitive, Negative, or Zero\n";
	cout << "e(X)it\n\n";
	cout << "Choice: ";

	// Input
	cin >> userChoice;

	return userChoice;
}
// Getting user numbers
bool getNumbers(double userInputs[], int size)
{
	// Output
	cout << "\nEnter " << size << " numbers separated with spaces :";
	for (int i = 0; i < size; i++)
	{
		// Input 
		cin >> userInputs[i];
	}
	return true;
}
// Prototypes
double maxNumber(double userInputs[], int size)
{
	// Variables
	double max = userInputs[0];
	for (int i = 1; i < size; i++)
	{
		// Input
		if (userInputs[i] > max)
		{
			max = userInputs[i];
		}
	}
	return max;
}
// Prototypes
double minNumber(double userInputs[], int size)
{
	// Variables 
	double min = userInputs[0];
	for (int i = 1; i < size; i++)
	{
		// Input
		if (userInputs[i] < min)
		{
			min = userInputs[i];
		}
	}
	return min;
}
// Prototypes
double multiplication(double userInputs[], int size)
{
	// Variables
	double mulitplation = userInputs[0];

	// Calculations
	for (int i = 1; i < size; i++)
	{
		mulitplation *= userInputs[i];
	}
	return mulitplation;
}
// Process choice
double processChoice(char letterChoice, double userInputs[], int size, bool numbersRecieved)
{
	// Variable
	double answer = 0.0;

	switch (letterChoice)
	{

		// New Numbers
	case 'N':
	case 'n':

		// Inputs
		numbersRecieved = getNumbers(userInputs, size);
		break;

		// Addition
	case 'S':
	case 's':
		if (numbersRecieved == true)
		{

			// Calculations
			answer = add(userInputs, size);

			// Output 
			displayAnswer(userInputs, size, '+', answer);
		}
		else
		{
			// Error Message
			cout << "\n\tError: Please select option N from the menu first!\n";
		}
		break;

		// Difference
	case 'D':
	case 'd':
		if (numbersRecieved == true)
		{

			// Calculations
			answer = subtraction(userInputs, size);

			// Output 
			displayAnswer(userInputs, size, '-', answer);
		}
		else
		{
			// Error Message
			cout << "\n\tError: Please select option N from the menu first!\n";
		}
		break;

		// Product
	case 'P':
	case 'p':
		if (numbersRecieved == true)
		{

			// Calculations
			answer = multiplication(userInputs, size);

			// Output 
			displayAnswer(userInputs, size, '*', answer);
		}
		else
		{
			// Error Message
			cout << "\n\tError: Please select option N from the menu first!\n";
		}
		break;

		// Quotient 
	case 'Q':
	case 'q':
		if (numbersRecieved == true)
		{
			if (detection(userInputs, size) != true)
			{
				// Calculations
				answer = division(userInputs, size);

				// Output 
				displayAnswer(userInputs, size, '/', answer);
			}
			else
			{
				// Error Message
				cout << "\n\tError: Cannot divide by zero!\n";
			}

		}
		else
		{
			// Error Message
			cout << "\n\tError: Please select option N from the menu first!\n";
		}
		break;

		// Average
	case 'A':
	case 'a':
		if (numbersRecieved == true)
		{

			// Calculations
			answer = average(userInputs, size);

			// Output 
			displayAverage(userInputs, size, '+', answer);
		}
		else
		{
			// Error Message
			cout << "\n\tError: Please select option N from the menu first!\n";
		}
		break;

		// Maximum
	case 'M':
	case 'm':
		if (numbersRecieved == true)
		{
			// Calculations
			answer = maxNumber(userInputs, size);

			// Output 
			displayMax(answer);
		}
		else
		{
			// Error Message
			cout << "\n\tError: Please select option N from the menu first!\n";
		}
		break;

		// Minimum
	case 'I':
	case 'i':
		if (numbersRecieved == true)
		{
			// Calculations
			answer = minNumber(userInputs, size);

			// Output 
			displayMin(answer);
		}
		else
		{
			// Error Message
			cout << "\n\tError: Please select option N from the menu first!\n";
		}
		break;

		// Positive, Negative, or Zero
	case 'O':
	case 'o':
		if (numbersRecieved == true)
		{
			// Output
			cout << "\n";
			detectingValues(userInputs, size);
		}
		else
		{
			// Error Message
			cout << "\n\tError: Please select option N from the menu first!\n";
		}
		break;

		// Exit
	case 'X':
	case 'x':
		cout << "\nThank you for using Team's 4 calculator! Good-bye!";
		break;

		// Error Message
	default:

		// Output
		cout << "\n\tError: Invalid choice!\n";
		break;
	}
	return numbersRecieved;
}
// Prototypes
double subtraction(double userInputs[], int size)
{
	// Variables
	double subtraction = userInputs[0];

	// Calculations
	for (int i = 1; i < size; i++)
	{
		subtraction -= userInputs[i];
	}
	return subtraction;
}



/*
 * Name:			main()
 * Parameters:		None.
 * Processes:		With this Program you are allowed to gather numbers and use them within a
 *                  functioning calculator that allows you to Add, Subtract, Multiply, Divide,
 *                  find the average, as well as display the Max or Min between a few numbers.
 *                  It also allows for you to determin if the numbers inputed were Positive,
					Negative, or Zero.
 * Return Value:	An integer representing an error code; if the program ends without error, zero
 *					will be returned to the calling program or operating system.
 */



int main()
{
	// Constants and Variables
	const int ARRAY_LENGTH = 3;
	double usersInputs[ARRAY_LENGTH] = { 0,0 };
	char userLetterChoice = '\0';
	bool numbersRecieved = false;

	// Formatting 
	cout << fixed << setprecision(3);

	do
	{
		userLetterChoice = getChoice();
		numbersRecieved = processChoice(userLetterChoice, usersInputs, ARRAY_LENGTH, numbersRecieved);

	} while (userLetterChoice != 'X' && userLetterChoice != 'x');

	return 0;
}
