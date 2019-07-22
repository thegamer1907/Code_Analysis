#include<bits/stdc++.h>
using namespace std;
const int Maxn=1e5+10;
long long a[Maxn],n,k,f,l;
int ans,t,m,F,L;
int main(){
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	cin>>n>>m>>k;
	for(int i=0;i<m;i++) cin>>a[i];
	f=0,l=k,t=m;
	while(t>0){
//		F=upper_bound(a,a+m,f)-a;
		L=upper_bound(a,a+m,l)-a;
		if(L-F==0)l+=k;
		else l+=(L-F),ans++;
		t-=(L-F),F+=(L-F);
	}
	cout<<ans;
}