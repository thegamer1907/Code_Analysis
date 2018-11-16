#include <bits/stdc++.h>
using namespace std;

long long n, t, a, p[30005];
int main(){
	cin >> n >> t;
	p[1] = 1;
	for(int i = 1; i < n; i++){
		cin >> a;
		if(p[i]) p[i+a] = 1;
	}
	cout << (p[t] ? "YES" : "NO");
}
