#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int n;
int a[100005];
int maxx=-1;
int ans;
long long rem;
int main(){
	ios::sync_with_stdio(0);
	//freopen("werewolf.in","r",stdin);
	//freopen("werewolf.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxx=max(maxx,a[i]);
	}
	for(int i=1;i<=n;i++){
		rem+=maxx-a[i];
	}
	ans=maxx;
	if(rem>=maxx)cout<<ans;
	else{
		ans+=(maxx-rem+n-2)/(n-1);
		cout<<ans;
	}
	return 0;
}