/*
Los factores primos de 13195 son 5, 7, 13 y 29.
¿Cuál es el factor primo más grande del número 600851475143 ?
*/

#include <iostream>
#include <math.h>

using namespace std;

int Find_LargestFactPrime(long long int number) {
	int redu = 2;
	while (number > redu) {
		(number % redu == 0) ? number /= redu : redu++;
	}
	return redu;
}

int main()
{
	long long int number = 600851475143;
	cout << "Factor primo mas grande de " << number << " es: " << Find_LargestFactPrime(number) << endl;
	
	return 0;
}
