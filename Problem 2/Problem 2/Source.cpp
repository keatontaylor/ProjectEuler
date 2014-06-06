#include <iostream>
using namespace std;

int main()
{
	int firstNum = 1;
	int secondNum = 2;
	int thirdNum = 0;
	int sum = 2;
	while (thirdNum < 4000000)
	{ 
		thirdNum = firstNum + secondNum;
		firstNum = secondNum;
		secondNum = thirdNum;

		if (thirdNum % 2 == 0)
			sum += thirdNum;

	}

	cout << sum << endl;
}
