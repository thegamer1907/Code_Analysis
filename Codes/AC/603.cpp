#include <iostream>
using namespace std;

int sum(long long k) {
	if (!k)
		return 0;
	else
		return k % 10 + sum(k / 10);
}

int main() {
	int k;
	cin >> k;
	for (long long i = 1, j = 0; 1; ++i) {
		if (sum(i) == 10)
			++j;
		if (j == k) {
			cout << i << endl;
			//system("pause");
			return 0;
		}
	}
	return 0;
}