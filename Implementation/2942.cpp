#include <bits/stdc++.h>
using namespace std;

int BS(int A, int B, int n, vector<int> &lista){
	while(A < B){
		int m = A + (B-A)/2;
		if(lista[m] <= n) A = m+1;
		else B = m;
	}
	if(lista[A] > n) return A;
	else return A+1;
}

int main(){
	int n,q; cin >> n;
	vector<int> prices(n);
	for(int i=0; i<n; i++)
		cin >> prices[i];
	sort(prices.begin(), prices.end());
	cin >> q;
	for(int i=0; i<q; i++){
		int day; cin >> day;
		cout << BS(0,n-1, day, prices) << "\n";
	}
	return 0;
}
