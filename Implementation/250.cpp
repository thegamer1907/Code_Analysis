#include <iostream>
#include <math.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	
	int n, a, b;
	cin >> n >> a >> b;

	int rounds = floor(log(n) / log(2));
	--a, --b;
	for(int i(0); i < rounds; ++i) {
		if(a == b) {
			cout << i << endl;
			return 0;
		}
		a /= 2;
		b /= 2;
	}
	cout << "Final!\n";
	return 0;
}