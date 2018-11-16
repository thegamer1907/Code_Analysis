#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n, max = 0, sum = 0;
	cin >> n;
	vector<int> numbers(n), inverted(n);
	for (auto i = 0; i < n; i++) {
		cin >> numbers[i];
		max += numbers[i];
	}
	
	if (n == max)
		cout << max - 1;
	else {
		for (auto i = 0; i < n; i++){
			for (auto j = i; j < n; j++){
				for (auto k = 0; k < n; k++) {
					if (k >= i && k <= j)
						sum += 1 - numbers[k];
					else
						sum += numbers[k];
				}
				if (sum > max)
					max = sum;
				sum = 0;
			}
		}
		cout << max;
	}
	return 0;
}
