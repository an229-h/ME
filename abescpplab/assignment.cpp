
#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int b = 3;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	a += b;
	cout << "a += b: " << a << endl;

	a -= b;
	cout << "a -= b: " << a << endl;

	a *= b;
	cout << "a *= b: " << a << endl;

	a /= b;
	cout << "a /= b: " << a << endl;

	a %= b;
	cout << "a %= b: " << a << endl;

	return 0;
}
