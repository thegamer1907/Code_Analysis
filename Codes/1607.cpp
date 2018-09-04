#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,n) for(int i=a;i<n;i++)
#define FORR(i,a,n) for(int i=a;i>n;i--)
#define ri(x) scanf("%d",&x)
#define rii(x,y) ri(x), ri(y)
#define db(x) printf("%d\n",x)
#define S second
#define F first
#define mp make_pair
#define pb push_back
typedef long long ll;
int sou[100000],S,n;
ll sout[100000];
int main(){
	rii(n,S);
	FOR(i,0,n)
		ri(sou[i]);
	ll l=0,r=n,mid,ans;
	ll T=0;
	while(true){
		T=0;
		if(l==r){
			FOR(i,0,n)
				sout[i]=sou[i]+(i+1)*l;
			sort(sout,sout+n);
			FOR(i,0,l)
				T+=sout[i];
			ans=l;
			break;
		}
		if(l==r-1){
			FOR(i,0,n)
				sout[i]=sou[i]+(i+1)*r;
			sort(sout,sout+n);
			FOR(i,0,r)
				T+=sout[i];
			ans=r;
			if(T<=S)
				break;
			T=0;
			FOR(i,0,n)
				sout[i]=sou[i]+(i+1)*l;
			sort(sout,sout+n);
			FOR(i,0,l)
				T+=sout[i];
			ans=l;
			break;
		}
		mid=(l+r)/2;
		FOR(i,0,n)
			sout[i]=sou[i]+(i+1)*mid;
		sort(sout,sout+n);
		FOR(i,0,mid)
			T+=sout[i];
		if(T<=S)
			l=mid;
		else
			r=mid-1;
	}
	printf("%lld %lld\n",ans,T);
	return 0;
}
