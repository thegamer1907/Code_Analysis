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

vector<pair<string,string> >v;
set<int>st[250][15];
ll main() {
	// freopen("Task.in","r",stdin);freopen("Task.out","w",stdout);

	std:ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	precompute();
		
	int n;
	cin>>n;

	for (int i=0 ; i<n ; i++) {
		string x;
		cin>>x;

		string s="",t="";
		for (int j=0 ; j<10 ; j++) {
			if(j>=sz(x))	break;
			s+=x[j];
			t+=x[sz(x)-1-j];
		}
		reverse(all(t));
		// cout<<x<<" lk "<<s<<" "<<t<<endl;
		v.pb(mp(s,t));

		for (int j=1 ; j<=10 ; j++) {
			for (int k=0 ; k<sz(x) ; k++) {
				int len=sz(x)-k;
				if(len<j)	break;
				int num=0;
				for (int p=0,q=k ; p<j ; p++,q++)	num=num*10+(x[q]-'0');
				st[i][j].insert(num);
			}
		}
	}


	int m;
	cin>>m;
	int i=n;

	while (m--) {
		int a,b;
		cin>>a>>b;

		a--,b--;
		string s=v[a].ss+v[b].ff;
		for (int j=1 ; j<=10 ; j++) {
			for (int k=0 ; k<sz(s) ; k++) {
				int len=sz(s)-k;
				if(len<j)	break;
				int num=0;
				for (int p=0,q=k ; p<j ; p++,q++)	num=num*10+(s[q]-'0');
				st[i][j].insert(num);
			}
		}

		string gg="",pp="";
		if(sz(v[a].ff)>=10) {
			gg=v[a].ff;
		}
		else {
			for(int j=0 ; j<10 ; j++) {
				if(j>=sz(s))	break;
				gg+=s[j];
			}
		}

		if(sz(v[b].ss)>=10) {
			pp=v[b].ss;
		}
		else {
			for (int j=0 ; j<10 ; j++) {
				if(j>=sz(s))	break;
				pp+=s[sz(s)-1-j];
			}
			reverse(all(pp));
		}
		// cout<<s<<" "<<gg<<" "<<pp<<endl;
		v.pb(mp(gg,pp));

		int ret=0;
		for (int j=1 ; j<=10 ; j++) {
			for (set<int>::iterator it=st[a][j].begin() ; it!=st[a][j].end() ; it++) {
				st[i][j].insert(*it);
			}
			for (set<int>::iterator it=st[b][j].begin() ; it!=st[b][j].end() ; it++) {
				st[i][j].insert(*it);
			}
			if(sz(st[i][j])==POWER[j]) {
				ret=j;
			}
		}
		cout<<ret<<endl;
		i++;
	}
}