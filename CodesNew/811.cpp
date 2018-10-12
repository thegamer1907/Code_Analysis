#include<cstdio>
#include<iostream>
#include<string>
#define MX 1005
using namespace std;
string a[MX],b[MX];
int main(){
	int m,n,i,j;
	cin>>n>>m;
	for(i=1;i<=n;i++) cin>>a[i];
	for(i=1;i<=m;i++) cin>>b[i];
	
	for(i=1;i<=n;i++)
		for(j=i+1;j<=n;j++)
			if(a[i]==a[j]) n--;
	for(i=1;i<=m;i++)
		for(j=i+1;j<=m;j++)
			if(b[i]==b[j]) m--;
	if(n>m) cout<<"YES"<<endl;
	else if(n==m){
		int f=0,p=0;
		for(i=1;i<=n;i++){
			f=0;
			for(j=1;j<=m;j++)
				if(a[i]==b[j]){
					f=1;
					break;
				}
			if(f) p++;
		}
		if(p%2==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	else cout<<"NO"<<endl;
    return 0;
}