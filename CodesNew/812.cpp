#include<iostream>
#include<string>
using namespace std;
int n,m;
string a[1005],b[1005];
int main(){
	while(cin>>n>>m){
		int i,j;
		for(i=0;i<n;i++) cin>>a[i];
		for(i=0;i<m;i++) cin>>b[i];
		int ans=0;
		for(i=0;i<n;i++){
			for(j=0;j<m;j++){
				if(a[i]==b[j]) ans++;
			}
		}
		if(ans%2==0){
			if(n>m) cout<<"YES\n";
			else cout<<"NO\n";
		}
		else if(n>m-1) cout<<"YES\n";
			else cout<<"NO\n";
	}
}
