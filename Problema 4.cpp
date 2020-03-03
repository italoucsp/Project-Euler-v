/*
Un número palindrómico se lee igual en ambos sentidos. El palíndromo más grande hecho del producto de dos números de 2 dígitos es 9009 = 91 × 99.
Encuentra el palíndromo más grande hecho del producto de dos números de 3 dígitos.
*/

#include <iostream>
#include <math.h>
#include <string>

using namespace std;

bool IsPalindro(int number) {
	string test = to_string(number);
	int last = int(test.length()) - 1;
	for (int ind = 0; ind < last; ind++) {
		if (test[ind] != test[last]) return false;
		last--;
	}
	return true;
}

int Greatest_Palindromo(int digitos) {
	int top = pow(10, digitos) - 1;
	int jump_to = (pow(10, digitos - 1) - 1);
	int a_limit = top - jump_to;
	while (true) {
		for (int f_factor = top; f_factor > a_limit; f_factor--) {
			for (int s_factor = top; s_factor > a_limit; s_factor--) {
				if (IsPalindro(f_factor * s_factor)) {
					return f_factor * s_factor;
				}
			}
		}
		a_limit -= jump_to;
	}
	return 0;
}

int main()
{
	cout << "Palindromo mayor: " << Greatest_Palindromo(3) << endl;
	return 0;
}
