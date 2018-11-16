#include <iostream>
#include <cmath>
using namespace std;

unsigned short int f(unsigned short int x) {
	if (x == 1) return 0;
	else return (1 + f((x / 2) + (x % 2)));
}

int main() {
	unsigned short int n, a, b;
	cin >> n >> a >> b;
	unsigned short int i = 1;
	while ((b != (a + (a % 2))) && (a != (b + (b % 2)))) {
		i++;
		a = a - ((a + (a % 2)) / 2) + (a % 2);
		b = b - ((b + (b % 2)) / 2) + (b % 2);
	}
	if (i == f(n)) { cout << "Final!"; }
	else { cout << i; };
}