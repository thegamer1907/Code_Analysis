#include<bits/stdc++.h>
using namespace std;
int N, i;
bool B[2];
char C[2], X[2];
int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin>>C[0]>>C[1]>>N;
	for (i=0;i<N;i++) {
		cin>>X[0]>>X[1];
		if (X[0]==C[0]&&X[1]==C[1]) {
			cout<<"YES\n";
			return 0;
		}
		if (X[1]==C[0]) {
			B[0]=1;
		}
		if (X[0]==C[1]) {
			B[1]=1;
		}
	}
	if (B[0]&&B[1]) {
		cout<<"YES\n";
	}
	else {
		cout<<"NO\n";
	}
}
