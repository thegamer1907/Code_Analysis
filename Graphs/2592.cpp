///////////////////////////////////////////////////////////////
//__________________________________________________________//
// \\\\\\\\\\\---------------------------------------------//
//          //                 __    __                   // 
//         //     \\\\\\\\    |. \  / .|    /////////    //
//     //////       ||   \\   |.|\\//|.|   //           //
//    /  // /       ||    \\  |.| \/ |.|  //   /////// //
//    / //  /       ||    //  |.|    |.|  \\     \\    \\
//    //////       ////////   |.|    |.|   \\\\\\\\\\   \\
//    //                                                 \\
// \\\\\\\\\\\\-------------------------------------------\\
// ________________________________________________________\\
/////////////////////////////////////////////////////////////

#include <bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define MAX 1000005
#define MOD 1000000007
#define pb push_back
#define mp make_pair
#define pii pair<ll,ll>
#define vi vector<ll>
#define vp vector<pii >
#define vs vector<string>
#define all(v) v.begin(),v.end()
#define sort(v) sort(all(v))
#define lb(v,x) lower_bound(all(v),x)
#define ub(v,x) upper_bound(all(v),x)
#define F first
#define S second
#define FOR(i,a,b) for(ll i=a;i<b;++i)
#define ROF(i,a,b) for(ll i=a;i>=b;i--)
#define sz(x) (ll)x.size()
typedef long long ll;

using namespace std;

ll gcd(ll a,ll b){return (a==0)?b:gcd(b%a,a);}

int c[10005];
int f[10005];

int main()
{
    IOS
    int n,ans=0;cin>>n;
    FOR(i,2,n+1)cin>>f[i];
    FOR(i,1,n+1){cin>>c[i];if(c[i]!=c[f[i]])ans++;}
    cout<<ans;
    return 0;
}
