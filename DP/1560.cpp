#include <iostream>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,a,ret=0,maxi=0,crt=0;
	cin >> n;
	for (int i=0; i<n; ++i){
		cin >> a;
		if (a == 1){
			a = -1;
			++ret;
		}
		else a = 1;
		crt = max(a,crt+a);
		maxi = max(maxi,crt);
	}
	if (n == ret) cout << n-1;
	else cout << ret+maxi;
	return 0;
}
