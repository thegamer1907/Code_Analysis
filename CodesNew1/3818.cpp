#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ll long long
#define ld long double
#define mp make_pair
#define ff first
#define ss second
ll n,cnt,maxx;
ll arr[100005];

int main()
{
    cin>>n;
    for(ll i=1;i<=n;i++)
    {
        cin>>arr[i];
        maxx=max(maxx,arr[i]);
        cnt+=arr[i];
    }
    cout<<max(maxx,(cnt-1)/(n-1)+1)<<endl;
}