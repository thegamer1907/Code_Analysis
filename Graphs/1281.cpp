#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,t,t1 = 1;
	cin >> n >> t;
	int p[n];
	for(int i = 1;i < n;++i) cin >> p[i];
	for(int i = 1;i < n;){
		if(i+p[i] == t){cout << "YES" << endl;return 0;}
		else i = i + p[i];
	}
	cout << "NO" << endl;
	return 0;
}