#include<bits/stdc++.h>
#include<string>
#define ll long long
#define lld long double
#define llu unsigned long long int
#define pb push_back
#define mp make_pair
#define fir first
#define sec second
#define gll(a,n) for(ll i=0;i<n;i++) cin>>a[i];
#define mod 1000000007
#define pi 3.1415926535897
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //freopen("B-small-attempt0.in", "r", stdin);freopen("output.txt", "w", stdout);
    //std::cout << std::setprecision(9);
    //std::cout << std::fixed;
    ll n,k,i,j;
    cin>>n>>k;
    set<ll> s;
    for(i=0;i<n;i++)
    {
        ll val=0;
        for(j=0;j<k;j++)
        {
            ll x;
            cin>>x;
            val+=pow(2,k-j-1)*x;
        }
        s.insert(val);
    }
    set<ll>::iterator l,f;
    for(l=s.begin();l!=s.end();l++)
    {
        for(f=s.begin();f!=s.end();f++)
        {
            ll x=*l,y=*f;
            if((x&y)==0)
            {
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";
}

