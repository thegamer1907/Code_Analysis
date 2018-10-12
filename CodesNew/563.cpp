//K.Chaitanya
#include <bits/stdc++.h>
using namespace std;
#define sd(x) scanf("%d", &(x))
#define pb push_back
#define mp make_pair
#define vi vector< int >
#define vl vector< ll >
#define ss second
#define ff first
#define ll long long
#define pii pair< int,int >
#define pll pair< ll,ll >
#define sz(a) a.size()
#define inf (1000*1000*1000+5)
#define all(a) a.begin(),a.end()
#define tri pair<int,pii>
#define vii vector<pii>
#define vll vector<pll>
#define viii vector<tri>
#define mod (1000*1000*1000+7)
#define pqueue priority_queue< int >
#define pdqueue priority_queue< int,vi ,greater< int > >
//std::ios::sync_with_stdio(false);
const int N = 1e7+10;
int cnt[N];
bool prime[N];
int pre[N];
void sieve(){
	for(int i=2;i<N;i++){
		if(!prime[i]){
			pre[i]=cnt[i];
			for(int j=i*2;j<N;j+=i){
				prime[j] = true;
				pre[i]+=cnt[j];
			}
		}
	}
}
int main(){
	std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	ll n;
	cin>>n;
	ll x;
	for(ll i=0;i<n;i++){
		cin>>x;
		cnt[x]++;
	}
	sieve();
	for(ll i=1;i<N;i++){
		pre[i] += pre[i-1];
	}
	ll m;
	cin>>m;
	while(m--){
		ll l,r;
		cin>>l>>r;
		ll maxi = 1e7;
		l = min(l,maxi);
		r = min(r,maxi);
		cout<<pre[r]-pre[l-1]<<endl;
	}
	return 0;
}






























