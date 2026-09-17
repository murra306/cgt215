// CGT-215-Lab-04-murra306.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
float factorial(int n, int *f) {
	for (int i = n; i >= 1; i--)
		*f = (*f) * i;
	return *f;
}
float arithmetic(float a, float d, int n) {
	float t;
	for (int i = 0;i < n;i++) 
		t = (a * (2 * a + (d - 1) * n)) / 2;
	return t;
}
float geometric(float a, float d, int n) {
	float one = 1;
	float t;
	for (int i = 0;i < n;i++)
		one = one * d;
		t = a*((1-one)/(1-d));
	return t;
}
int main() {
	int choice;
	char again;
	int Input;
	int Input2;
	int Input3;
	int result = 1;
	int AP1;
	int	AP2;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			cout << "Factorial = ";
			cin >> Input;
			if (Input < 0) {
				cout << "Factorial of a negative number doesn't exist.";
			}
			else {
				cout << "Factorial of " << Input << " = " << factorial(Input, &result) << endl;
			}
		}
		else if (choice == 2) {
			cout << "Base Number = ";
			cin >> Input;
			cout << "Increment = ";
			cin >> Input2;
			cout << "Amount of Progressions = ";
			cin >> Input3;
			AP2 = Input + (Input3 - 1) * Input2;
			cout << "Arithmetic Progression = ";
			for (AP1 = Input; AP1 <= AP2; AP1 = AP1 + Input3) {
				if (AP1 != AP2)
					cout << AP1 << " + ";
				else 
					cout << AP1 << " = " << arithmetic(Input, Input2, Input3) << endl;
			}
		}
		else if (choice == 3) {
			cout << "Base Number = ";
			cin >> Input;
			cout << "Multiplying by = ";
			cin >> Input2;
			cout << "Amount of Progressions = ";
			cin >> Input3;
			AP2 = Input*(Input3^(Input2-1));
			cout << "Geometric =" << geometric(Input, Input2, Input3) << endl;
		}
		cout << "Go Again? [Y/N] ";
		cin >> again;
	} while (again == 'y' || again == 'Y');
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
