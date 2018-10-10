#include<bits/stdc++.h>
using namespace std;
const int maxn=1e5+10;
long long n,s,sum,a[maxn],w[maxn],ans;
bool check(long long k){
	for(int i=1;i<=n;i++) w[i]=a[i]+k*i;
	sort(w+1,w+n+1); sum=0;
	for(int i=1;i<=k;i++){
		sum+=w[i];
		if(sum>s) return 0;
	}
	return 1;
}
int main(){
#ifndef ONLINE_JUDGE
	freopen("exec.in","r",stdin);
	freopen("exec.out","w",stdout);
#endif
	cin>>n>>s;
	for(int i=1;i<=n;i++) cin>>a[i];
	long long L=0,R=n;
	while(L<R){
		long long mid=(L+R+1)>>1;
		if(check(mid)) L=mid,ans=sum;
		else R=mid-1;
	}
	printf("%I64d %I64d\n",L,ans);
	return 0;
}
