#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int arr[1000000];

int main() {
	int n, k = 0;
	cin >> n;
	string s;
	for (int i = 0;i < n;++i) {
		cin >> s;
		if (s == "Icosahedron") {
			k += 20;
		}
		else if (s == "Cube") {
			k += 6;
		}
		else if (s == "Tetrahedron") {
			k += 4;
		}
		else if (s == "Dodecahedron") {
			k += 12;
		}
		else if (s == "Octahedron") {
			k += 8;
		}
	}
	cout << k;

	return 0;
}