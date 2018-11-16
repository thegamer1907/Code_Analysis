#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef long double ld;
ll inf=1e14;
ll mod=1e9+7;
char en='\n';
#define N 500005


// Driver program to test above
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    ll a=0,b=0,c=0;
    cin>>n;
    while(n--)
    {
        ll x,y,z;
        cin>>x>>y>>z;
        a+=x;
        b+=y;
        c+=z;
    }
    if((a==0) and (b==0) and (c==0))
        cout<<"YES"<<en;
    else
        cout<<"NO"<<en;
    return 0;
}
