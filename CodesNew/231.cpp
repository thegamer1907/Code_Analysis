#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,t,i,j,time,ans=0,books=0,k=0;
	cin>>n>>t;
	vector<int>a(n);
	for(i=0;i<n;i++) cin>>a[i];
	time=a[0];
	for(i=0;i<n;i++){ if(i!=0) time-=a[i-1];
	if(a[i]>t) continue;
		for(j=k+1;j<n;j++){
			time+=a[j];
			if(time>t) {
			k=j;
			break;}
		}
		books=j-i;
		if(books>ans) ans=books;
		if(n-1-i<=ans) break;
	}
	cout<<ans;
}