#include <iostream>
#include <fstream>	// file operations

/*
**	Author:	Austin Fouch
**	Date:	02/03/2017
**	Assgn:	Lab2
**
**	Lab2.cpp
**		- prints out the first 10 numbers of the fibonacci sequence recursivley
*/

using namespace std;

/*
**	int fib(int x)
**		- x = current element
*/
int fib(int x) {

	if (x == 0)
		return 0;

	else if (x == 1)
		return 1;

	else
		// adds two previous elements' values
		return fib(x - 1) + fib(x - 2);
}

int main() {

	// n = # of fib numbers to print out
	int n = 10;
	// output file
	ofstream outFile;
	outFile.open("lab2_output.txt", ios::trunc);
	outFile << "Austin Fouch | CMPS 361 Software Design | Lab2 | 02/02/2017\n" <<
		"\nFirst " << n << " Fibonacci numbers:\n";

	// start at first element
	for(int i = 1; i <= n; i++)
		outFile << fib(i) << " ";

	outFile.close();
	return 0;
}