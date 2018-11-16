#include <iostream>
#include <vector>

using namespace std;

int calcSum(const vector<int>& v) {
	int res = 0;
	for (auto i : v) {
		res += i;
	}
	return res;
}

vector<int> invert(vector<int> v, int a, int b){
	vector<int> inverted(v.size());
	for (auto i = 0; i < v.size(); i++) {
		if (i >= a && i <= b)
			inverted[i] = 1 - v[i];
		else
			inverted[i] = v[i];
	}
	return inverted;
}

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
			for (auto j = 0; j < n; j++){
				inverted = invert(numbers, i, j);
				sum = calcSum(inverted);
				if (sum > max)
					max = sum;
			}
		}
		cout << max;
	}
	
	return 0;
}
