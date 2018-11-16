#include<bits/stdc++.h>
using namespace std;

bool a[101],b[101];

int main(){
	int n,ans=0,maxn=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		if(x==1) a[i]=true;
		else a[i]=false;
		b[i]=a[i];
	}
	for(int i=1;i<=n;++i){
		for(int j=i;j<=n;++j){
			for(int k=i;k<=j;++k){
				if(b[k]==false) b[k]=true;
				else b[k]=false;
			}
			for(int k=1;k<=n;++k) if(b[k]==true) ans++;
			maxn=max(maxn,ans);
			ans=0;
			for(int k=1;k<=n;++k) b[k]=a[k];
		}
	}
	cout<<maxn<<endl;
	return 0;
}

