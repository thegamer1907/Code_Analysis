#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;

long long a[N];
long long dmg[N];
long long suma[N];
long long sumd[N];

int main(){
	int n,q,p,die;
	cin >> n >> q;
	for (int i = 0; i < n; i++){
		cin >> a[i];
		if (i == 0)
			suma[i] = a[i];
		else
			suma[i] = suma[i - 1] + a[i]; 
	}
	for (int i = 0; i < q; i++){
		cin >> dmg[i];
		if (i == 0){
			if (dmg[i] >= suma[n - 1])
				sumd[i] = 0;
			else
				sumd[i] = dmg[i];
		}
		else{
			if (sumd[i - 1] + dmg[i] >= suma[n - 1])
				sumd[i] = 0;
			else
				sumd[i] = sumd[i - 1] + dmg[i];
		}
	}
	for (int i = 0; i < q; i++){
		if (sumd[i] < suma[0]){
			cout << n << endl;
			continue;
		}
		die = upper_bound(suma, suma + n, sumd[i]) - suma;
		cout << n - die << endl;
	}
	return 0;
}