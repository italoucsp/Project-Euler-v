/*
2520 es el número más pequeño que se puede dividir por cada uno de los números del 1 al 10 sin ningún resto.
¿Cuál es el número positivo más pequeño que es divisible por todos los números del 1 al 20?
*/

#include <iostream>
#include <vector>

using namespace std;

int MCD(int m, int n) {
	int temp = m;
	if (m == 0 or n == 0)return 0;
	int s = 0;
	while (m % 2 == 0 and n % 2 == 0) {
		m >>= 1;
		n >>= 1;
		s++;
	}
	while (n % 2 == 0) { n >>= 1; }
	while (m != 0) {
		while (m % 2 == 0) { m >>= 1; }
		if (m < n) swap(m,n);
		m -= n;
		m >>= 1;
		if (m == temp) m = 0;
	}
	return (int(pow(2, s))*n);
}

int Less_Multi_in_Range(int begin, int end) {
	vector<int> divs;
	for (int element = begin; element <= end; element++) {
		divs.push_back(element);
	}
	int result = 1;
	int l_ind = int(divs.size()) - 1;
	while (l_ind >= 0) {
		if (divs[l_ind] == 1) {
			divs.erase(divs.begin() + l_ind);
			l_ind--;
			continue;
		}
		for (int i = 0; i < l_ind - 1; i++) {
			int mcd = MCD(divs[l_ind], divs[i]);
			divs[i] = (mcd == 1) ? divs[i] : divs[i] / mcd;
		}
		result *= divs[l_ind];
		l_ind--;
	}
	return result;
}


int main()
{
	cout << "Menor multiplo: " << Less_Multi_in_Range(1, 20) << endl;
	return 0;
}
