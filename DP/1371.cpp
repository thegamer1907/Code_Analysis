#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
ll power(ll x,ll y,ll p){ll r=1;x=x%p;while(y){if(y&1)r= r*x%p;y=y>>1;x=x*x%p;}return r;}
#define all(v) v.begin(),v.end()
#define PR(a) cout<<"("<<a<<")";
#define ED cout<<'\n';
#define fr2(j,a,n)  for(int j=a;j<n;j++)
#define fr1(j,n)  for(int j=0;j<n;j++)
#define fr(n)  for(int i=0;i<n;i++)
#define PB push_back
#define MP make_pair
#define pii pair<int,int>
#define F first
#define S second 
#define mod 1000000007
#define MX 100

int main()
{	
    FIO
    int n;cin>>n;
    int a[n];
    int sum=0;
    int mx=0;
    fr(n){cin>>a[i]; sum+=a[i];}
    
    fr(n)
    {int z=0;
        for(int j=i;j<n;j++)
        {
            if(a[j]==1) z--;else z++;
            if(z>mx)mx=z;
        }
        
    }
    if(mx==0) {cout<<sum-1<<endl;return 0;}
    
    cout<<mx+sum<<endl;
    
}