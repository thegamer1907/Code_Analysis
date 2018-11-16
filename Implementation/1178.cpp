#include <iostream>
using namespace std;

int main() {
	int n, t;
	cin >> n >> t;
	char input[51] = {};
	for (int i = 0; i < n; i ++) {
		cin >> input[i];
		}
	for (;t>0;t--) {
		for (int i = 0; i < n; i++) {
			if (input[i] == 'B'&& input[i + 1] == 'G')
			{
				char sort = input[i + 1];
				input[i + 1] = input[i];
				input[i] = sort;
				i++;
			}
		}
		
	}
	cout << input;
	return 0;
}
