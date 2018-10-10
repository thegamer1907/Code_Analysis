#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	int	n = 0; //number of lanterns
	int l; //length
	int pos[1000];
	cin >> n >> l;
	double max = 0;
	for (int i = 0; i < n; i++) {
		cin >> pos[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (pos[i]<pos[j]) {
				swap(pos[i], pos[j]);
			}

		}

	}
	for (int a = 1; a < n; a++) {
		/*for (int b = 0; b < n; b++) {
		if (max < abs(pos[a] - pos[b])/2 && pos[a] - pos[b] != 0) { // checks distance to each other
		max = abs(pos[a] - pos[b])/2;
		}
		}*/
		if ((pos[a] - pos[a - 1]) / 2.0>max && pos[a] - pos[a - 1] != 0) {
			max = (pos[a] - pos[a - 1]) / 2.0;

		}
	}
	for (int i = 0; i < n; i++) { // checks if the distance to the edges are more
		if (pos[i]  > max && i == 0) {
			max = pos[i];

		}
		if ((l - pos[i]) > max && i == n - 1) {
			max = (l - pos[i]);

		}
	}
	cout << fixed << max << endl;
	return 0;
}