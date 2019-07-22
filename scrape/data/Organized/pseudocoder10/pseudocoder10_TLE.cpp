#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define ffor(i,a,b) for(int i=a;i<b;i++)
#define bfor(i,a,b) for(int i=a-1;i>=b;i--)
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define mem(x,y) memset(x,y,sizeof(x))
#define all(x) x.begin(),x.end()
#define SP(x) setprecision(x)
#define sz(x) (int)x.size()
#define fast  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define PI 3.1415926535
#define lb lower_bound
#define ub upper_bound
#define bs binary_search

int main()
{
    ll n,m,k;
    cin>>n>>m>>k;
    ll a[m];
    ffor(i,0,m) cin>>a[i];
    int done=0,ans=0,last=0;
    while(done!=m)
    {
        ll page=(a[done]-last)/k;
        if(last>=a[done]){}
        else{
        if(page*k!=a[done]-last) page++;
        last=page*k+last;}
       // cout<<last<<endl;
        int index=ub(a,a+m,last)-a;
        last+=index-done;
        done=index;
        ans++;
       // cout<<done<<endl;
    }
    cout<<ans;
    return 0;
}