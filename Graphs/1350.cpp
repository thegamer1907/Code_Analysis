#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;

#define fast_io() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define all(x) x.begin(), x.end()

int main(){
	
	fast_io();

	int n, t;
	cin >> n >> t;

	int current_cell = 0; // start from 1 and go to t

	vector<int> a(n-1);
	for (int i = 0; i < n-1; ++i){
		cin	>> a[i];
	}

	for (int i = 0; i < n-1;){
		i = i + a[i];
		if (i == t-1){
			cout << "YES\n"; break;
		} else if (i >= t){
			cout << "NO\n"; break;
		}
	}

}