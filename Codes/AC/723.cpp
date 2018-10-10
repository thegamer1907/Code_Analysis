#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define pb push_back
#define fori(i,a,b) for (int i = a; i < b; ++i)
#define ford(i,a,b) for (int i = a; i > b; --i)

bool cute(int x) {
	auto str = to_string(x);
	int sum = 0;
	for(auto e : str) {
		sum += e - 48;
	}
	return sum == 10;
}

int main() {
	int n, k = 0;
	cin >> n;
	fori(i,0,1e8) {
		if (cute(i))
			k++;
		if (k == n) {
			cout << i << endl;
			return 0;
		}
	}	
}
