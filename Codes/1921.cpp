#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
#define PI 3.14159265358979323846
#define root 1.41421356237309504880
#define mod 1000000007
#define loop(x,y) for(ll i=x;i<y;i++)
#define inloop(x,y) for(ll j=x;j<y;j++)
#define pb push_back
#define vec(x) vector<x>
#define asgn(x,y,z) for(ll i=0;i<z;i++) x[i]=y
#define prntarr(arr,n) for(ll i=1;i<n;i++) cout<<arr[i]<<" "
#define test cout<<"idhar"<<endl
#define str string
#define fileinout freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
// ll cnt[5001];
// ll prefix[5001];
// ll ans[5001];
map<ll,ll> rt,lt;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    ll n,k;
    cin>>n>>k;
    ll a[n];
    loop(0,n)
    {
        cin>>a[i];
        rt[a[i]]++;
    }
    ll ans=0;
    loop(0,n)
    {
        ll k1=0,k2=0;
        if(a[i]%k==0)
            k1=lt[a[i]/k];
        rt[a[i]]--;
        k2=rt[a[i]*k];
        lt[a[i]]++;
        ans+=k1*k2;
    }
    cout<<ans<<endl;
    return 0;
}