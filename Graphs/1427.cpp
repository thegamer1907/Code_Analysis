#include <iostream>

using std::cin;
using std::cout;

int main() {    
    int n, t, k, p, temp;
	cin >> n >> t;

	p = 0;
	for(int i = 1; i <= n; i++) {
		if(p == t) {
			cout << "YES";
			return 0;
		} else if(p > t) {
			cout << "NO";
			return 0;
		}

		cin >> k;
		p = i + k;
		while(--k) {
			cin >> temp; ++i;
		}
	}
	
	return 0;
}