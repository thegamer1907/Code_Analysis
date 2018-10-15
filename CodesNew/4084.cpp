# include <bits/stdc++.h>
using namespace std;
const int nMax = 2e5+5;
int n, q;
long long a[nMax];
int main(){
	cin >> n >> q;
	long long temp, ht = 0;
	for(int i = 1; i <= n; i++){
		cin >> temp;
		a[i] = temp+a[i-1];
	}
	for(int i = 1; i <= q; i++){
		cin >> temp;
		ht += temp;
		if(ht >= a[n]){
			cout << n << endl;
			ht = 0;
			continue;
		}
		cout << n - (upper_bound(a+1, a+n+1, ht)-1-a) << endl;
	}
	return 0;
}

