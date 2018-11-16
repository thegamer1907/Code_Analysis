#include <iostream>
#include <cstring>

using namespace std;

int n, t;
char seq[51];

int main() {
	cin >> n >> t;
	cin >> seq;
	for (int p = 0; p < t; p++) {
		for (int i = 0; i < n - 1; i++) {
			if (seq[i] == 'B' && seq[i + 1] == 'G') {
				seq[i] = 'G';
				seq[i + 1] = 'B';
				i++;
			}
		}
	}

	cout << seq;
	return 0;
}