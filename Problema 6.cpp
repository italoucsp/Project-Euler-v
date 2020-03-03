/*
La suma de los cuadrados de los primeros diez números naturales es,
	1^2+ 2^2+ . . . + 10^2= 385
El cuadrado de la suma de los primeros diez números naturales es,
	( 1 + 2 + . . . + 10 )^2= 55^2= 3025
Por lo tanto, la diferencia entre la suma de los cuadrados de los primeros diez números naturales y el cuadrado de la suma es 3025-385=2640.
Encuentra la diferencia entre la suma de los cuadrados de los primeros cien números naturales y el cuadrado de la suma.
*/

#include <iostream>
#include <math.h>

using namespace std;

long long int Sum_Square_Difference(int limit) {
	return long long int(pow(limit * (limit + 1) / 2, 2) - limit * (2 * int(pow(limit, 2)) + 3 * limit + 1) / 6);
}

int main()
{
	cout << "Diferencia: " << Sum_Square_Difference(100) << endl;
	return 0;
}
