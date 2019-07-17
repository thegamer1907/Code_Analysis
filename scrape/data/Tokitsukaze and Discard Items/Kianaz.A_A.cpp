#include<bits/stdc++.h>
using namespace std;
const int Maxn=1e5+10;
long long a[Maxn],n,k,f,l,T,ans,t,m,F,L;
int main(){
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	cin>>n>>m>>k;
	for(int i=0;i<m;i++) cin>>a[i];
	for(int i=0;i<m;i++){
		if(a[i]>L){
			L+=t,ans++,t=0;
	//		if(i==0 || a[i]-a[i-1]>=k)
				L+=((a[i]-L+k-1)/k)*k;
		}
		t++;
	}
	cout<<ans;
}