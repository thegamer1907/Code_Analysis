#include <bits/stdc++.h>
using namespace std;
int n,k;
long long a[222222];
map<long long,long long>l,r;
long long ans;
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		r[a[i]]++;
	}
	for(int i=1;i<=n;i++){
		r[a[i]]--;
		if(a[i]%k==0){
			ans+=l[a[i]/k]*r[a[i]*k];
		}
		l[a[i]]++;
	}
	cout<<ans<<endl;
	return 0;
}