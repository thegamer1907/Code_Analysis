#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double 
#define endl "\n"
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define SZ(a) (int)(a.size())
#define fr(i,n) for(i=1;i<=n;i++)

typedef pair<int, int> II;
typedef vector< II > VII;
typedef vector<int> VI;

vector<ll> v1,v2;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    ll l,r,i;
    cin>>l>>r;
    while(l>0)
    {
        v1.PB(l%2);
        l/=2;
    }
    while(r>0)
    {
        v2.PB(r%2);
        r/=2;
    }
    while(SZ(v1)<61) v1.PB(0);
    while(SZ(v2)<61) v2.PB(0);
    for(i=60;i>=0;i--)
        if(v1[i]!=v2[i])
            break;
    if(i==-1)
        cout<<0<<endl;
    else
        cout<<(1ll<<(i+1))-1<<endl;
    return 0;
}
