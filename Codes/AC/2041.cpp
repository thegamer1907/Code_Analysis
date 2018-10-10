/** Source code by WDragon **/
#include<bits/stdc++.h>
#define ll long long
#define MAX 200003
#define pii pair<int,int>
#define VP vector< pii >
#define MOD 1000000007
#define mp make_pair
#define pb push_back
#define rep(i,a,b) for(int (i) = (a); (i) < (b); (i)++)
#define S(x) scanf("%d",&(x))
#define S2(x,y) scanf("%d%d",&(x),&(y))
#define P(x) printf("%d\n",(x))
#define all(v) (v).begin(),(v).end()
#define FF first
#define SS second
using namespace std;
//int dx[]={1,0,0,-1},dy[]={0,1,-1,0};
map<ll,int > m,l;
set<ll> s,sl;
int a[MAX];
int main(){
int n,k;
S2(n,k);
rep(i,0,n){
	S(a[i]);
	if(s.find(a[i])==s.end()){
		m[a[i]]=1;
		s.insert(a[i]);
	}
	else
		++m[a[i]];
}
ll ans=0,t1,t2;
rep(i,0,n){
	if(sl.find(a[i])!=sl.end())
		l[a[i]]++;
	else
		l[a[i]]=1,sl.insert(a[i]);
	if(a[i]%k==0){
		if(sl.find(a[i]/k)!=sl.end())
			t1=l[a[i]/k]-(a[i]/k==a[i]);
		else
			t1=0;
		ll num=1ll*a[i]*k;
		if(sl.find(num)!=sl.end())
			t2=m[num]-l[num];
		else if(s.find(num)!=s.end())
			t2=m[num];
		else
			t2=0;
		ans+=t1*t2;
	}
}
printf("%lld\n",ans);
return 0;
}
/**	Who knows what lies above :P **/