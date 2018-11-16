#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	// vector<bool> x(n);
	int x, cnt=0;
	vector<int> y(n);
	for(int i=0; i<n; i++){
		cin >> x;
		if(x){
			y[i]=-1;
			cnt++;
		}
		else
			y[i] = 1;
	}
	if(n==1){
		cout << (y[0]+1)/2;
		return 0;
	}
	int cm=y[0], m=y[0];
	for(int i=1; i<n; i++){
		cm = max(y[i], cm+y[i]);
		m = max(m, cm);
	}
	cout << m+cnt;
	return 0;
}