#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n, p = 1;
	cin >> n;
	vector <int> D, P;
	while (n > 0) {
		D.push_back(n % 10);
		n /= 10;
		P.push_back(p);
		p *= 10;
	}
	reverse(D.begin(), D.end());
	reverse(P.begin(), P.end());
	vector <int> N;
	for (int i = 0; i < 9; i++) {
		int v = 0;
		for (int j = 0; j < D.size(); j++) {
			v *= 10;
			if (D[j] > i)
				v++;
		}
		if (v > 0)
			N.push_back(v);
	}
	cout << N.size() <<endl;
	for (int v : N)
		cout << v << " ";
	cout <<endl;
	return 0;
}
