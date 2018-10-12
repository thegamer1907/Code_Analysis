#include <bits/stdc++.h>
using namespace std;
 
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ll long long
#define pb push_back
#define mp make_pair
#define e end
#define b begin

int main()
{
    IOS;
    ll n,k,i;
    cin>>n>>k;
    if(k%2!=0)
    cout<<1;
    else
    {
        for(i=n;i>=1;i--)
        {
            ll y=pow(2,i);
            if(k%y==0)
            {
                cout<<i+1;
                return 0;
            }
        }
    }
}