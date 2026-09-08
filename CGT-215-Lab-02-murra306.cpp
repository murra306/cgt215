// CGT-215-Lab-02-murra306.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	float A;
	float B;
	float X;
	cout << "Hello, let's solve Ax+B=0 based on your input." << endl;
	cout << "Please enter a value for A: ";
	cin >> A;
	cout << "A=" << A << endl;
	cout << "Please enter a value for B: ";
	cin >> B;
	cout << "B=" << B << endl;
	cout << "Solving ";
	cout << A;
	cout << "x+";
	cout << B;
	cout << "=0 for x..." << endl;
	cout << "The answer is x = ";
	X = (-B/A);
	cout << X;
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
