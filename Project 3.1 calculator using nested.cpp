// //************************
//Immanuel Braxton
//3/29/2024
// Explain  CODE
////This program mimics a calculator. The program should take an input of two integers and the operator required to perform the operation. 
// It should then ouput the given numbers from left to //right, operator, and the result. If a given input is divided by zero, an ouput of undefined 
// will be displayed. This program only supports minor calculation using integers and the following operators +, -, *, /. If operator input provided is 
// not supported and error message of invalid operator will be displayed after entering integers. This program will as user if it want to continue 
// calculations or exit program. 
//*************************


#include <cmath> // include operators
#include <iostream>
#include <iomanip> //includes manipulators 

using namespace std;

int main()
{
	char op, choice, N, Y;
	double num1, num2;
	int i = 1;//intialize i to 1


	while (i == 1) // loop while i is equal to 1
	{


		cout << "Enter an operator (+, -, * or /):"; // ask for operator, loop while i is equal to 1
		cin >> op;

		cout << "Enter two integers, include a space between integers: "; // ask for the two numbers, in while loop
		cin >> num1 >> num2;

		if (op == '+')
		{
			cout << "total: " << num1 << "+" << num2 << "=" << (num1 + num2) << endl;
		}
		else if (op == '-')
			{
			cout << "total: " << num1 << "-" << num2 << "=" << (num1 - num2) << endl;
			}
		else if (op == '*')
				{
				cout << "total: " << num1 << "*" << num2 << "=" << (num1 * num2) << endl;
				}
		else if (op == '/')
				{
					if (num2 != 0)
					{
					cout << "total: " << num1 << "/" << num2 << "=" << (num1 / num2) << endl;
					}
					else
					{
					cout << "total: " << num1 << "/" << num2 << "=" << "Undefined" << endl;
					}
				}

		else
		{
			cout << "Invalid operator " << endl;
		}


		cout << "Would you like to continue operating? Enter 'Y' or 'N' (case sensitive): " << endl;
		cin >> choice;

		if (choice == 'N')
		{
			break; //exit the loop if th user enters 'N'
		}

	}



	return 0;
}