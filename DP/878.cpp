#include <bits/stdc++.h>
using namespace std;

int a[101],b[101];
int main() {
	int n,c,k; k=0;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> a[i];
		if(a[i]==1) {b[i]=-1; k++;}
		else b[i]=1;
	}

	if(n*a[0]==1) {
		cout << 0;
		return 0;
	}
	for(int i=1; i<n; i++) {
		if(b[i]+b[i-1]>b[i])
			b[i]+=b[i-1];
	}
	c=0;
	for(int i=0; i<n; i++)
		if(b[i]>b[c])
			c=i;
	
	cout << b[c]+k;
}