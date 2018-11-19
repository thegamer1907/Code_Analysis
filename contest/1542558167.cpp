#include <algorithm>
#include <math.h>
#include <iostream>
#include <vector>

using namespace std;

int countZeros(vector<int> v) {
	int count = 0;
	for (int i : v) {
		if (i == 0) {
			count++;
		}
	}
	return count;
}

int main() {
	int n, k;
	cin >> n >> k;
	vector<vector<int>> mat(n, vector<int>(k));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			cin >> mat[i][j];
		}
	}
	for (int j = 0; j < k; j++) {
		bool seenZero = false;
		for (int i = 0; i < n; i++) {
			if (mat[i][j] == 0) {
				seenZero = true;
				break;
			}
		}
		if (!seenZero) {
			cout << "NO";
			return 0;
		}
	}
	if (k <= 2) {
		cout << "YES";
	}
	else if (k == 3) {
		bool zero2 = false;
		for (int i = 0; i < n; i++) {
			int count = countZeros(mat[i]);
			if (count >= 2) {
				zero2 = true;
				break;
			}
		}
		if (zero2) cout << "YES";
		else cout << "NO";
	}
	else { // k == 4
		bool zero3 = false;
		vector<int> pairs(3, 1111);
		for (int i = 0; i < n; i++) {
			int count = countZeros(mat[i]);
			if (count >= 3) {
				zero3 = true;
			}
			else if (count == 2) {
				int code = 0;
				for (int j = 0; j < k; j++) {
					if (mat[i][j] == 0) {
						code += pow(10, j);
					}
				}
				for (int p = 0; p < pairs.size(); p++) {
					if (pairs[p] == 1111) {
						pairs[p] -= code;
						break;
					}
					else if (pairs[p] == code) {
						zero3 = true;
						break;
					}
				}
			}
			if (zero3) break;
		}
		if (zero3) cout << "YES";
		else cout << "NO";
	}
	return 0;
}