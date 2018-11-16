#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n, a, b;
	cin >> n >> a >> b;
	vector<int> m(n);
	for (int i = 0; i < n; i++) {
		m[i] = i + 1;
	}
	int round = 1;
	while (1) {
		vector<int> k(m.size() / 2);
		for (int i = 0; i < m.size(); i+=2) {
			if (m[i] == a && m[i + 1] == b || m[i] == b && m[i + 1] == a) {
				if (m.size() == 2)
					cout << "Final!";
				else
					cout << round;
				//system("pause");
				return 0;
			}
			if (m[i] == a || m[i + 1] == a) {
				k[i / 2] = a;
				continue;
			}
			if (m[i] == b || m[i + 1] == b) {
				k[i / 2] = b;
				continue;
			}
			k[i/2] = m[i];
		}
		m = k;
		round++;
	}
	return 0;
}