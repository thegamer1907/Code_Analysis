/*In The Name of ALLAH*/
#include <bits/stdc++.h>
#define ll long long 
#define MAX 100111
#define inf 10000000000111
using namespace std;
ll r, n[3],p[3],cnt[3];

bool can(ll a){
	return r >= (p[0] * max(a * cnt[0] - n[0],0LL) +p[1] *  max(a * cnt[1] - n[1],0LL) + p[2] *  max(a * cnt[2] - n[2],0LL) );
}

int main(){ 
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0); 
	string s;
	cin>>s;
	for(int i = 0; i < s.size(); i++){
		if(s[i]=='B')cnt[0]++;
		else if(s[i] == 'S')cnt[1]++;
		else cnt[2]++;
	}
	cin>>n[0]>>n[1]>>n[2];
	cin>>p[0]>>p[1]>>p[2];
	cin>>r;
	ll l = 0, h = inf;
	while(h - l > 1){
		ll mid = (l + h)>>1;
		if(can(mid))l = mid;
		else h = mid;
	}
	if(can(h))cout<<h;
	else cout<<l;
	return 0;
}