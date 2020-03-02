#include <iostream>

using namespace std;

#define MAX_NUM 1000

int Sum_of_Multiples(int x, int y) {
	int rep = x * y;
	int num_of_m1 = (MAX_NUM % x) ? MAX_NUM / x : (MAX_NUM / x - 1);
	int num_of_m2 = (MAX_NUM % y) ? MAX_NUM / y : (MAX_NUM / y - 1);
	int num_of_twise = (MAX_NUM % rep) ? MAX_NUM / rep : (MAX_NUM / rep - 1);

	int r1 = ((x * num_of_m1 * num_of_m1) - (x * num_of_m1)) / 2 + (x * num_of_m1);
	int r2 = ((y * num_of_m2 * num_of_m2) - (y * num_of_m2)) / 2 + (y * num_of_m2);
	int repeated = ((rep * num_of_twise * num_of_twise) - (rep * num_of_twise)) / 2 + (rep * num_of_twise);
	return r1 + r2 - repeated;
}

int main()
{
	cout << "Suma total: " << Sum_of_Multiples(3, 5) << endl;
	return 0;
}
