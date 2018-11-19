#include<bits/stdc++.h>
using namespace std;

int n,k,a[20];

int main(){
	cin>>n>>k;
	int i,j,q;
	memset(a,0,sizeof a);
	for (i=1;i<=n;i++){
		int t=0;
		for (int i=1;i<=k;i++){
			cin>>q;
			t=t*2+q;
		}
		a[t]++;
	}
	for (int i=0;i<(1<<k);i++){
		for (j=0;j<(1<<k);j++){
			if (i&j) continue;
			if (a[i] && a[j]){
				cout<<"YES"<<endl;
				return 0;
			}
		}
	}
	cout<<"NO"<<endl;
	return 0;
}/*
3 4
1 1 0 0
0 0 1 1

*/
