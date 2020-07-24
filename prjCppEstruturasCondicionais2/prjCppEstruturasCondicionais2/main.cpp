#include<iostream>
using namespace std;

void main() {
	system("Color E");
	int val1 = 0, val2 = 0;
	char selectOperator;

	cout << "\tCALCULATOR" << endl;
	cout << "\t__________\n" << endl;

	cout << "Enter value 1: ";
	cin >> val1;
	cout << "Enter value 2: ";
	cin >> val2;

	cout << "Select the Operator (+,-,/,*,%): ";
	cin >> selectOperator;

	if (selectOperator == '+')
	{
		cout << "\nThe result of the addition of " << val1 << " and " << val2 << " is " << (val1 + val2) << endl;
	}
	else if (selectOperator == '-')
	{
		cout << "\nThe result of the Subtraction of " << val1 << " and " << val2 << " is " << (val1 - val2) << endl;
	}
	else if (selectOperator == '/')
	{
		cout << "\nThe result of the Division of " << val1 << " and " << val2 << " is " << (val1 / val2) << endl;
	}
	else if (selectOperator == '*')
	{
		cout << "\nThe result of the Multiplication of " << val1 << " and " << val2 << " is " << (val1 * val2) << endl;
	}
	else if (selectOperator == '%')
	{
		cout << "\nThe result of the Modulo of " << val1 << " and " << val2 << " is " << (val1 % val2) << endl;
	}
	else
	{
		cout << "\nInvalid operator.  " << endl;
	}
    }
