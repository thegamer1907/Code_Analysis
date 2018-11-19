#include <bits/stdc++.h>
using namespace std;
#define fastio() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define FOR(a,n) for(int i=a;i<n;++i)
#define arrin(n) for(int i=0; i < n; ++i) cin>>arr[i];
#define arrout(n) for(int i=0; i < n; ++i) cout<<arr[i]<<" ";cout<<nl;
#define mod 1000000007
#define pb push_back
typedef long long ll;

int main()
{
    fastio();
    string pass;
    cin>>pass;
    ll n, flag=0, temp=0, ans=0;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string sound;
        cin>>sound;
        if(sound==pass)
        {
            ans=1;
            break;
        }
        if(sound[1]==pass[0])
        {
            flag=1;
        }
        if(sound[0]==pass[1])
        {
            temp=1;
        }
    }
    if(ans==1||(temp==1&&flag==1))
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}