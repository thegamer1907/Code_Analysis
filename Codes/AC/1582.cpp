#include<bits/stdc++.h>
using namespace std;
int N, T, i, j, A[100000], S[100000], awa, akh, cen, res, P, H;
int main () {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	cin>>N>>T;
	for (i=0;i<N;i++) {
		cin>>A[i];
	}
	akh=N;
	for (cen=(awa+akh)/2;awa<=akh;cen=(awa+akh)/2) {
		for (i=0;i<N;i++) {
			S[i]=A[i]+(i+1)*cen;
		}
		sort(S,S+N);
		P=0;
		for (i=0;1;i++) {
			if (i==cen) {
				awa=cen+1;
				res=cen;
				H=P;
				break;
			}
			P+=S[i];
			if (P>T) {
				akh=cen-1;
				break;
			}
		}
	}
	cout<<res<<' '<<H<<'\n';
}
