#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void speed() { ios_base::sync_with_stdio(1); cin.tie(NULL); cout.tie(NULL); }
# define fs first
# define se second
#define mp make_pair
/***************************************** Start ***************************************************************/
//vector <ll> P;
//ll S[15485868];
//void sieve()
//{
//	S[0]=-1, S[1]=-1;
//	for(ll i=2;i<=15485864;i++) S[i]=i;
//	for(ll i=2;i<=15485864;i++)
//	{
//		if(S[i]==i)
//		{
//			for(ll j=i*i;j<=15485864;j+=i)
//			S[j]=i;
//		}
//	}
//	for(ll i=2;i<=15485864;i++)
//	if(S[i]==i) P.push_back(i);
//}
/*****************************************End of template *********************************************************/

void solve()
{
	ll n;
	cin>>n;
	vector <ll> b(n);
	map <ll,ll> B, G;
	for(ll i=0;i<n;i++){
		cin>>b[i];
		B[b[i]]++;
	}
	ll m;
	cin>>m;
	vector <ll> g(m);
	for(int i=0;i<m;i++){
		cin>>g[i];
		G[g[i]]++;
	}
	sort(g.begin(), g.end()); sort(b.begin(), b.end());
	ll ans=0;
	for(ll i=0;i<n;i++){
		ll x=b[i];
		if(G[x-1]>0){
			ans++;
			G[x-1]--;
			continue;
		}
		if(G[x]>0){
			ans++;
			G[x]--;
			continue;
		}
		if(G[x+1]>0){
			G[x+1]--;
			ans++;
			continue;
		}
		
	}
	cout<<ans<<"\n";

	
	
}
int main()
{
//	#ifdef JUDGE
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    #endif
//    //clock_t beg = clock();
    ll t=1;
    //cin>>t;
    while(t--)
    {
    	solve();
	}
    //clock_t end = clock();
    //fprintf(stderr, "%.3f sec\n", double(end - beg) / CLOCKS_PER_SEC);
    return 0;
}
