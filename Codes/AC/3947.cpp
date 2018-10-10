#include<bits/stdc++.h>
using namespace std;
int i, j;
long long N[3], H[3], P[3], R, B, awa, akh, cen, res;
string S;
int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin>>S;
	for (i=S.length()-1;i>=0;i--) {
		if (S[i]=='B') {
			N[0]++;
		}
		else if (S[i]=='S') {
			N[1]++;
		}
		else {
			N[2]++;
		}
	}
	for (i=0;i<3;i++) {
		cin>>H[i];
	}
	for (i=0;i<3;i++) {
		cin>>P[i];
	}
	cin>>R;
	akh=1000000000100;
	for (cen=(awa+akh)/2;awa<=akh;cen=(awa+akh)/2) {
		B=0;
		for (i=0;i<3;i++) {
			B+=max((long long)0,P[i]*(cen*N[i]-H[i]));
		}
		if (B>R) {
			akh=cen-1;
		}
		else {
			res=cen;
			awa=cen+1;
		}
	}
	cout<<res<<'\n';
}
