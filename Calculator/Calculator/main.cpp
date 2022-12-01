*
 * File Name:        Replace this text with your file name.
 * Names:            Replace this text with your first and last name, and anyone else involved.
 * Course:            COP 1000C at Valencia College
 * Professor:        David Stendel
 * Description:        Replace this text; see the instructions in the Template.
 * Date:            5/4/20
 */

 // Preprocessor Directives
#include <iostream>
#include <iomanip>
using namespace std;

// Prototypes
char displayMenu()
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


bool getNumbers(double userNumbers[], int size)
{
    int i;
    cout << "\nEnter " << size << " numbers separated with spaces :";
    for (i = 0; i < size; i++)
    {
        cin >> userNumbers[i];
    }
    return true;
}

double arraySum(double userNumbers[], int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += userNumbers[i];
    }
    return sum;
}

/*
 * Name:            main()
 * Parameters:        None.
 * Processes:        Replace this text; see the instructions in the Template.
 * Return Value:    An integer representing an error code; if the program ends without error, zero
 *                    will be returned to the calling program or operating system.
 */



int main()
{
    // Constants and Variables
    const int ARRAY_LENGTH = 3;
    double usersInputs[ARRAY_LENGTH];
    char userLetterChoice = '\0';
    bool numbersRecieved = false;
    int i;

    cout << fixed << setprecision(3);

    do
    {
        userLetterChoice = displayMenu();

        if (userLetterChoice == 'N' || userLetterChoice == 'n' || numbersRecieved)
        {
            switch (userLetterChoice)
            {
            case 'N':
            case 'n':
                getNumbers(usersInputs, ARRAY_LENGTH);
                numbersRecieved = true;
                break;

            case 'S':
            case 's':
                if (numbersRecieved == true)
                {
                    cout << "\nAnswer: ";
                    for (i = 0; i < ARRAY_LENGTH; i++)
                    {
                        cout << usersInputs[i] << " + ";
                    }
                    cout << " = " << arraySum(usersInputs, ARRAY_LENGTH) << "\n";
                }
                else
                {
                    cout << "\n\tError: Please select option N from the menu first!\n";
                }
                break;

            default:
                cout << "\n\tError: Invalid choice!\n";
                break;


            }
        }
        else if (userLetterChoice == 'X' || userLetterChoice == 'x')
        {
            cout << "\nThank you for using Team 4's calculator! Good-bye!\n";
        }
        else
        {
            cout << "\n\tError: Please select option N from the menu first!\n";
        }

    } while (userLetterChoice != 'X' && userLetterChoice != 'x');

    return 0;
}

