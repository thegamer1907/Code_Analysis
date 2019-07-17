#include <string.h>
#include <sstream>
#include <stdio.h>
#include <assert.h>
#include <math.h>
#include <bitset>
#include <algorithm>
#include <iostream>
#include <stdlib.h>    
#include <time.h> 
#include <stack>
#include <queue>
#include <set>

#include <map>
#include <vector>
#include <string>
#include <stdlib.h>

#define ll long long
#define clr(x) memset(x,0,sizeof(x))
#define _clr(x) memset(x,-1,sizeof(x))
#define fr(i,a,b) for(int i = a; i < b; ++i)
#define frr(i,a,b) for(int i = a; i > b; --i)
#define pb push_back
#define sf scanf

#define pf printf
#define mp make_pair

using namespace std;
const int N = 2000000;

int main() {
	ll n;
	ll m,k;
	cin>>n>>m>>k;
	queue<ll> q;
	fr(i,0,m) {
		ll t;
		sf("%lld",&t);
		q.push(t);
	}
	ll cut = 0;
	ll ans = 0;
	while(!q.empty()) {
		ll num = 0;
		ll cur = 0;
		ll end = q.front();
		end -= cut;
		ll tt = end%k;
		if(tt==0)tt=k;
		end += (k-tt);

		while(!q.empty()) {
			ll t = q.front();
			t -= cut;
			//printf("t= %lld end = %lld\n",t,end);
			//printf("t = %lld cut = %lld tt = %lld ans = %lld\n",t,cut,tt,ans);
			if(t<=end) {
				q.pop();
				num++;
				continue;
			}
			else {
				break;
			}
		}
		++ans;
		cut+=num;
		//printf("cut = %lld\n",cut);
	}
	cout<<ans<<endl;
}