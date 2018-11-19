#include <bits/stdc++.h>
using namespace std;

typedef int ll;

#define int long long
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define sz(x) ((int)x.size())
#define all(x) x.begin(),x.end()
#define endl '\n'

typedef pair<int,int>pii;
typedef pair<int,pair<int,int> > piii;

const int mod=1e9+7;

int POWER[65];
int power(int a, int b) {int ret=1;while(b) {if(b&1) ret*=a;a*=a;if(ret>=mod) ret%=mod;if(a>=mod) a%=mod;b>>=1;}return ret;}
int inv(int x) {return power(x,mod-2);}

void precompute() {
	POWER[0]=1;
	for(int i=1;i<63;i++) POWER[i]=POWER[i-1]<<1LL;
}

ll main() {
	// freopen("Task.in","r",stdin);freopen("Task.out","w",stdout);

	std:ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string s;
	cin>>s;

	int n;
	cin>>n;

	int a=0,b=0;
	for (int i=0 ; i<n ; i++) {
		string t;
		cin>>t;

		if(t==s) {
			cout<<"YES\n";
			return 0;
		}
		reverse(all(t));
		if(t==s) {
			cout<<"YES\n";
			return 0;
		}
		reverse(all(t));

		if(s[0]==t[0])	a|=1;
		if(s[0]==t[1])	a|=2;
		if(s[1]==t[0])	b|=1;
		if(s[1]==t[1])	b|=2;
	}	

	if(b&1 && a&2) {
		cout<<"YES\n";
		return 0;
	}
	cout<<"NO\n";
}