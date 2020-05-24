// OITchallengeprob.cpp 
//

#include "pch.h"
#include <iostream>
using namespace std;

void romToNorm() {
	char romNum[15]; //user input variable
	int normNum[15];
	int  runningTotal = 0;


	cout << "Please type in a Roman numeral or number to be converted: ";//Program instructions
	cin >> romNum;
	cin.get(romNum, 16);// put the user input into a chracter array.


	for (int i = 0; i < sizeof(romNum); i++) {
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

	for (int i = (1-1); i < sizeof(romNum); i++) {

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

	cout << runningTotal;
	cout << romNum[0] << endl;
	cout << romNum[1] << endl;
	cout << romNum[2] << endl;


}

int main()
{
	char conversion;

	cout << "Type n to convert a Roman numeral to a Normal number, or type r to convert a Normal number to a Roman numeral: ";
	cin >> conversion;
	
	if (conversion == 'n') 
	{
		cin.clear();
		romToNorm();
	}
	else if (conversion == 'r')
	{
		//call n-> r function
	}

	return 0;
}


