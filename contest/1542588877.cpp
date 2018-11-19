#include<bits/stdc++.h>
using namespace std;
int n,k,kk,x;
bool f[100];
signed main(){
	ios::sync_with_stdio(false);
	cin>>n>>k;for (int i=1;i<=n;i++){
		x=0;for (int j=1;j<=k;j++)cin>>kk,x=x*2+kk;
		f[x]=true; 
	}for (int i=0;i<=15;i++)
		for (int j=0;j<=15;j++)
			if (f[i]&&f[j]&&(i&j)==0){
				cout<<"YES"<<endl;return 0;
			}
	cout<<"NO"<<endl;
}