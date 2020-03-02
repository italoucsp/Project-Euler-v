/*
Cada nuevo término en la secuencia de Fibonacci se genera agregando los dos términos anteriores.Al comenzar con 1 y 2, los primeros 10 términos serán :
	1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
Al considerar los términos en la secuencia de Fibonacci cuyos valores no exceden los cuatro millones, encuentre la suma de los términos de valor par.
*/

#include <iostream>
#include <math.h>

#define NUM_AUREO 1.618034
#define ROOT5 2.2360679775

using namespace std;

int Get_Fibonacci(int index) {
	return int(((pow(NUM_AUREO, index) - pow(1 - NUM_AUREO, index)) / ROOT5));
}

int Sum_Even_Fibonacci(long LIMIT) {
	int sum = 0;
	int ind_sequence = 3;
	long ind_sequence_calculated = Get_Fibonacci(ind_sequence);
	for (; ind_sequence_calculated < LIMIT; ) {
		sum += ind_sequence_calculated;
		ind_sequence += 3;
		ind_sequence_calculated = Get_Fibonacci(ind_sequence);
	}
	return sum;
}

int main()
{
	long LIMIT = 4000000;
	cout << "Suma de num. Fibonacci's menores a " << LIMIT << ": " << Sum_Even_Fibonacci(LIMIT) << endl;
	return 0;
}
