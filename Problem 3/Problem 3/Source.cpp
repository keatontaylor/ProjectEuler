#include <iostream>
using namespace std;

bool isPrime(unsigned long long);

int main()
{
	unsigned long long bigInt = 600851475143;
	for (unsigned long long i = 2; i < bigInt; i++)
		if (isPrime(i) && bigInt % i == 0)
		{
			bigInt / i;
			cout << i << endl;
		}		
}

bool isPrime(unsigned long long num)
{
	long long testNum = num;
	for (num--; num > 1; num--)
		if (testNum % num == 0)
			return false;
	return true;
	
}