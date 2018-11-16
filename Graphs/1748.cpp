#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MOD 10000007

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int n, t, x, pos = 1;
	int cell[30002];
	
	cin >> n >> t;
	for(int i = 1; i < n; i++){
		cin >> cell[i];
	}
	while(pos < t){
		pos += cell[pos];
	}
	cout << ((pos == t) ? "YES\n" : "NO\n");

	return 0;
}

