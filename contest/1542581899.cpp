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

const int maxn=1e5+55;

map<int,int>mpp;

ll main() {
	// freopen("Task.in","r",stdin);freopen("Task.out","w",stdout);

	std:ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	precompute();
	int n,k;
	cin>>n>>k;

	mpp[0]=1;
	bool chk=0;
	for (int i=0 ; i<n ; i++) {
		int mas=0;
		for (int j=0 ; j<k ; j++) {
			int x;
			cin>>x;

			if(x)	mas|=POWER[j];
		}
		if(mpp.find(mas)!=mpp.end()) {
			chk=1;
		}
		for (int j=0 ; j<POWER[k] ; j++) {
			bool ch=0;
			for (int p=0 ; p<k ; p++) {
				if(mas&POWER[p]) {
					if(j&POWER[p]) ch=1;
				}
			}
			if(!ch)	mpp[j]++;
		}
	}
	if(chk)	cout<<"YES\n";
	else	cout<<"NO\n";

	


}