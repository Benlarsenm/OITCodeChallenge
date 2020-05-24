// OITChallenge.cpp the function for converting from Roman numeral to normal numbers

#include "pch.h"
#include <iostream>
using namespace std;

int main() {
	char romNum[15]; //user input variable
	int normNum[15];
	int  runningTotal = 0;

	
	cout << "Please type in a Roman numeral to be converted: ";//Program instructions
	cin.get(romNum, 16);// put the user input into a chracter array.


		for (int i = 0; i < sizeof(romNum); i++) { // walks through the user input of roman numerals and converts it to its associated number.
			if (romNum[i] == 'i' || romNum[i] == 'I')
			{
				normNum[i] = 1;
			}

			else if (romNum[i] == 'v' || romNum[i] == 'V')
			{
				normNum[i] = 5;
			}

			else if (romNum[i] == 'x' || romNum[i] == 'X')
			{
				normNum[i] = 10;
			}

			else if (romNum[i] == 'l' || romNum[i] == 'L')
			{
				normNum[i] = 50;
			}

			else if (romNum[i] == 'c' || romNum[i] == 'C')
			{
				normNum[i] = 100;
			}

			else if (romNum[i] == 'd' || romNum[i] == 'D')
			{
				normNum[i] = 500;
			}

			else if (romNum[i] == 'm' || romNum[i] == 'M')
			{
				normNum[i] = 1000;
			}

			else
			{
				normNum[i] = 0;
			}

		}

		for (int i = 0; i < sizeof(romNum); i++) {//math for getting the final number.

			if (normNum[i + 1] > normNum[i])
			{
				runningTotal = runningTotal + (normNum[i + 1] - normNum[i]);
				i++;
			}

			else
			{
				runningTotal = runningTotal + normNum[i];
			}


		}

		cout << runningTotal; //prints the converted number.
	


	return 0;
}


