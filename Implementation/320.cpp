// CODEFORCE 158A
#include <bits/stdc++.h>
using namespace std;

int main() {
	int i,n,k,a[100], nilaimin;
	double total = 0;

// INPUT
	cin >> n >> k;
	
	for(i=1;i<=n;i++){
		cin >> a[i];
	}

// NILAI MINIMUM
	nilaimin = a[k];
	
// CARI NILAI A[i] > NILAI MINIMUM = LOLOS
	for(i=1;i<=n;i++){
		if(a[i] >= nilaimin && a[i] > 0)
		total = total + 1;
	}
	
// TOTAL
	cout << total << endl;
}