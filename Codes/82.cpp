//BADBUOY//
#include <bits/stdc++.h>
#define IOS  ios_base::sync_with_stdio(true), cin.tie(0), cout.tie(0)
#define mp   make_pair
#define pb   push_back
#define F    first
#define S    second
#define vi   vector < int >
#define pii  pair < int, int >
#define mi   map < int, int >
#define ll   long long
#define ld   long double
#define MOD  1000000007
#define MAXN  50005 
#define rep(i,a,b)  for(int i=a;i<b;i++)
#define all(a)  (a).begin(),(a).end()
using namespace std;

int main(){
	IOS;
    ll t=1,n,sum=0,val=0,cnt=0,ans=0;
	//cin>>t; 
	while(t--){
		cin>>n;
		vi a(n);
		rep(i,0,n) cin>>a[i],sum+=a[i];
		if(sum%3)
			cout<<"0",exit(0);
		rep(i,0,n-1){
			val+=a[i];
			if(val==2*(sum/3))
				ans+=cnt;
			if(val==(sum/3)) cnt++;
		}
		cout<<ans; 
    }
	return 0;
} 