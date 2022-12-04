/*
 * File Name:		Replace this text with your file name.
 * Names:			Replace this text with your first and last name, and anyone else involved.
 * Course:			COP 1000C at Valencia College
 * Professor:		David Stendel
 * Description:		Replace this text; see the instructions in the Template.
 * Date:			5/4/20
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

double average(double userInputs[], int size)
{
	double answer = add(userInputs, size) / size;
	return answer;
}

double detectingValues(double userInputs[], int size)
{
	double positive = 0.0;
	double negative = 0.0;
	double zero = 0.0;

	for (int i = 0; size < i; i++)
	{
		if (userInputs[i] > 0.0)
		{
			positive = userInputs[i];
			cout << "The number " << positive << ", which is in position "
				<< i + 1 << ", is positive.\n";
		}
		else
		{
			if (userInputs[i] < 0.0)
			{
				negative = userInputs[i];
				cout << "The number " << negative << ", which is in position "
					<< i + 1 << ", is negative.\n";
			}
			else
			{
				zero = userInputs[i];
				cout << "The number " << zero << ", which is in position "
					<< i + 1 << ", is zero.\n";
			}
		}
	}
	return positive, negative, zero;
}

bool detection(double userInputs[], int size)
{
	bool detectedZero = false;
	for (int i = 1; i < size; i++)
	{
		if (userInputs[i] == 0)
		{
			detectedZero = true;
		}
	}

	return detectedZero;
}

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

void displayAnswer(double userInputs[], int size, char signOperator, double answer)
{
	cout << "\nAnswer: " << userInputs[0];
	for (int i = 1; i < size; i++)
	{
		cout << " " << signOperator << " " << userInputs[i];
	}
	cout << " = " << answer << "\n";
}

void displayAverage(double userInputs[], int size, char signOperator, double answer)
{
	cout << "\nAnswer: (" << userInputs[0];
	for (int i = 1; i < size; i++)
	{
		cout << " " << signOperator << " " << userInputs[i];
	}
	cout << ") / " << size << " = " << answer << "\n";
}

void displayMax(double answer)
{
	cout << "\nThe largest number is " << answer << ".\n";
}

void displayMin(double answer)
{
	cout << "\nThe smallest number is " << answer << ".\n";
}

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

char getChoice()
{

	char userChoice = '\0';

	cout << "\n\tCalculator Menu\n\n";
	cout << "(N)ew Numbers.\n";
	cout << "(S)um.\n";
	cout << "(D)ifference.\n";
	cout << "(P)roduct.\n";
	cout << "(Q)uotient\n";
	cout << "(A)verage.\n";
	cout << "(M)aximum.\n";
	cout << "m(I)nimum.\n";
	cout << "p(O)sitive, Negative, or Zero.\n";
	cout << "e(X)it.\n\n";
	cout << "Choice: ";

	cin >> userChoice;

	return userChoice;
}

bool getNumbers(double userInputs[], int size)
{
	// Input
	cout << "\nEnter " << size << " numbers separated with spaces :";
	for (int i = 0; i < size; i++)
	{
		cin >> userInputs[i];
	}
	return true;
}

double maxNumber(double userInputs[], int size)
{
	double max = userInputs[0];
	for (int i = 1; i < size; i++)
	{
		if (userInputs[i] > max)
		{
			max = userInputs[i];
		}
	}
	return max;
}

double minNumber(double userInputs[], int size)
{
	double min = userInputs[0];
	for (int i = 1; i < size; i++)
	{
		if (userInputs[i] < min)
		{
			 min = userInputs[i];
		}
	}
	return min;
}

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
			if(detection(userInputs, size) != true)
			{ 
				// Calculations
				answer = division(userInputs, size);

				// Output 
				displayAnswer(userInputs, size, '/', answer);
			}
			else
			{
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


/*
 * Name:			main()
 * Parameters:		None.
 * Processes:		Replace this text; see the instructions in the Template.
 * Return Value:	An integer representing an error code; if the program ends without error, zero
 *					will be returned to the calling program or operating system.
 */



int main()
{
	// Constants and Variables
	const int ARRAY_LENGTH = 5;
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
