#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define dep(i,a,b) for(int i=a;i>=b;i--)
#define mem(x,num) memset(x,num,sizeof x)
using namespace std;
int n,k,t,cnt[106],x;
int main()
{
	cin>>n>>k;
	rep(i,1,n){
		t=0;
	    rep(j,1,k){
	    	scanf("%d",&x);
	    	t=t*2+x;
	    }
	    cnt[t]++;
	}
	rep(i,0,(1<<k))
	    rep(j,0,(1<<k))
	        if(cnt[i]&&cnt[j]&&((i&j)==0)){cout<<"YES\n";return 0;}
	cout<<"NO\n";
	return 0;
}