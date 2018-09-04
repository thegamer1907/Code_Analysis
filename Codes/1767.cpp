#include<iostream>
#include<algorithm>
#include<cstdio>
#include<string.h>
#include<climits>
#include<vector>
#include<stack>
#include<set>
#include<queue>
#include<map>
#include<math.h>
using namespace std;
#define FOR(i,a,b) for(i=a;i<=b;i++)
#define sint(i) scanf("%d",&i)
#define ss(s) scanf("%s",s)
#define pii pair<int,int>
#define mp(i,j) make_pair(i,j)
#define ll long long
#define MAX 1000000000
#define MOD 1000000007
#define vi vector<int>
#define vvi vector < vi >
#define pb(i) push_back(i);
#define tr(v,it) for(it=v.begin();it!=v.end();it++)
#define DEBUG 0
ll check(ll mid,ll n,ll m) {
	ll r;
	ll ans=0;
	FOR(r,1,n) {
		if(mid%r == 0)
			ans+= min(((mid/r)-1),m);
		else
			ans+= min(mid/r,m);
	}
	return ans;
}
int main(){
	ll m,n,k;
	cin>>n>>m>>k;
	ll low = 1, high = m*n;
	while(low<high) {
		ll mid = (low+high+1)/2;
		if(check(mid,n,m)>(k-1)) {
			high = mid-1;
		}
		else
			low=mid;
	}
	cout<<low;
	return 0;
}