//          * AUTHOR : Divyanshu *

#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f(a,b) for(ll i=a; i<b; i++)
#define mod 1000000007
#define mp make_pair
#define pb push_back
#define vll vector<ll>
#define pll vector<pair<ll,ll>>
#define ld long double
#define fr(a,b) for(ll j=a; j>=b; j--)
#define fi(a,b) for(ll j=a; j<b; j++)

int main()
{
    #ifndef ONLINE_JUDGE
	   freopen("input.txt", "rt", stdin);
   	// freopen("output.txt", "wt", stdout); *No Need*
	#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    ll n, k, d=0;
    cin>>n>>k;
    ll a[n];
    f(0, n) cin>>a[i];
    ll ans=0, cp=0, l=0, nz=0, ip=0, fp=0;
    f(0, n)
    {
        if(a[i] == 1){l++;  if(l>ans){ ans=l; ip=cp; fp=i;d++;} continue; }
        nz++;
        l++;
        if(nz <= k) {if(l>ans){ans=l; ip=cp; fp=i;d++; }}
        else{
            while(a[cp]!=0) { cp++; l--; }
            cp++;
            nz--;
            l--;
        }
    }
    cout<<ans<<"\n";
    if(d!=0){
    f(ip, fp+1)
    {
        if(a[i]==0) a[i]=1;
    }}
    f(0, n) cout<<a[i]<<" ";

     #ifndef ONLINE_JUDGE
    	cout<<"\nTime Elapsed : " << 1.0*clock() / CLOCKS_PER_SEC << " s\n";
    #endif
}

