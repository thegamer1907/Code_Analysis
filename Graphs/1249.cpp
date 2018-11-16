#include <bits/stdc++.h>

using namespace std;

int main(){

	int n, t;
	vector <int> portais;

	int pos = 1;

	cin >> n >> t;
	portais.resize(n);

	for (int i = 1 ; i < n; i++){
		int x;
		cin >> x;
		portais[i] = i + x;
	}

	while (pos < t){
		pos = portais[pos];
		if (pos == t) {
			cout << "YES" << endl;
			return 0;
		}
	}

	cout << "NO" << endl;





	return 0;
}