#include <bits/stdc++.h>

using namespace std;

const int max_n = 100 * 100 * 3 + 10;
int a[max_n];

int main() {
	int n , t , x , i = 1;

	cin >> n >> t;

	for (int i = 1; i < n; i++){
		cin >> x;
		a[i] = i + x;
	}
	
	string s = "1";
	while (i != n){
		i = a[i];
		s += to_string(i);
	}
	
	if (s.find(to_string(t)) != -1)	
	    cout << "YES";
	
	else	
	    cout << "NO";
	
	return 0;
}