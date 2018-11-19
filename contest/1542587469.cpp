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
	
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;

	int p=s,q=m;
	s/=5;
	m/=5;

	if(t1>t2)	swap(t1,t2);
	h*=2,m*=2,s*=2,t1*=2,t2*=2;
	if(p%5!=0)	s++;
	if(s>0 || q%5!=0) {
		m++;
	}
	if(s>0 || m>0) {
		h++;
	}
	// cout<<h<<" "<<m<<" "<<s<<endl;
	if((h<t1 || h>t2) && (m<t1 || m>t2) && (s<t1 || s>t2)){
		cout<<"YES\n";
		return 0;
	}
	if(h>t1 && h<t2 && m>t1 && m<t2 && s>t1 && s<t2) {
		cout<<"YES\n";
		return 0;
	}
	cout<<"NO\n";
}