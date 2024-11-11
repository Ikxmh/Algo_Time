// O(n).cpp : This file contains the O(n) algo in 'main' function. Program execution begins and ends there.
//

using namespace std;

#include <iostream>

int main()
{
	int n = 5;

	cout << "----------------\n";
	for (int i = 0; i < n; i++)
	{
		cout << "| Hello World! |\n";
	}
	cout << "----------------\n";

	cout << "This statement repeat in a loop for 'n' number of times.\n";
	cout << "Making our time complexity of n*O(1) -> which then can be shorten to O(n)\n";
	cout << "When an algorithm have a mix of single-executed & loop statements, \n" "time will be increased according to numbers of time each statement ran.\n";
}
