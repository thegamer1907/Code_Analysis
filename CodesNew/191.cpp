//**mitta21**//
#include<bits/stdc++.h>
#define ll          long long int
#define pb          push_back
#define    endl        '\n'
#define pii         pair<ll int,ll int>
#define vi          vector<ll int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (ll int)x.size()
#define hell        1000000007
#define rep(i,a,b)    for(ll int i=a;i<b;i++)
#define lbnd        lower_bound
#define ubnd        upper_bound
#define bs          binary_search
#define mp          make_pair
using namespace std;

#define N  1000005
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int TESTS=1;
    //cin>>TESTS;
    while(TESTS--)
    {
          
    ll n,t,a[100005],s=0,p=0,q=0,ans=0,i;
        
    cin>>n>>t;;
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        s=s+a[i];
        if(s<=t)
        {
            p++;
        }
        else
        {
            s=s-a[i];
            s=s-a[q];
            q++;
            i--;
            ans=max(ans,p);
            p-=1;

        }      
    }
    cout<<max(ans,p);


    return 0;
    }
}