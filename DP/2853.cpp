#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[2001][2001];
void fill(int n, int m){
	int i,j,q,ans=0;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			a[i][j]=0;
		}
	}
	for(i=1;i<=n;i++){
		a[i][1]=1;
	}
	for(j=1;j<m;j++){
		for(i=1;i<=n;i++){
			q=i;
			while(q<=n){
				a[q][j+1]+=a[i][j];
				a[q][j+1]=a[q][j+1]%1000000007;
				q+=i;
			}
		}
	}
	for(i=1;i<=n;i++){
		ans+=a[i][m];	
		ans=ans%1000000007;
	}
	cout<<ans;
}
int main(){
	cin>>n>>m;
	fill(n,m);
	return 0;
}