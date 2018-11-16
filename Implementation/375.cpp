#include<iostream>

using namespace std;

int main() {
	int n, k, cnt;

	while (cin >> n >> k) {
		int x[n];

		for (int i = 0; i < n; i++) cin >> x[i];

		cnt = 0;
		for (int i = 0; i < n; i++)
		{
			if (x[i] >= x[k - 1] && x[i] > 0)
				cnt++;

		}
		cout << cnt << endl;
	}
	return 0;
}