#include <bits/stdc++.h>

using namespace std;

int door[100001];

int main() {
	int n;
	cin >> n;
	int minimum_door_size = 1000000000;
	for(int i = 0; i < n; i++) {
		cin >> door[i];
		minimum_door_size = min(minimum_door_size, door[i]);
	}
	int number_of_full_rotations = minimum_door_size / n;
	for(int i = 0; i < n; i++)
		door[i] -= number_of_full_rotations * n;
	for(int i = 0; i < n; i++) {
		if(door[i] - i <= 0) {
			cout << i + 1 << endl;
			exit(0);
		}
	}
	for(int i = 0; i < n; i++) {
		if(door[i] - (n + i) <= 0) {
			cout << i + 1 << endl;
			exit(0);
		}
	}
}