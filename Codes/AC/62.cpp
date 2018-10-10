#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;


int main()
{
    ll n;   cin>>n;
    vector<ll> A(n);
    vector<ll> cumsum(n+1,0);
    for(ll i=0;i<n;i++){cin>>A[i];}
    ll sum = 0;
    for(ll j=0;j<n;j++){sum +=A[j];cumsum[j+1] = sum;}
    bool isposs = false;
    if(sum>=0 && sum%3==0){isposs = true;}
    else if(sum<0 && (-sum)%3==0){isposs =true;}
    if(!isposs){cout<<0<<endl;}
    else
    {
        ll ans =0 ;
        ll twoby3 = 0;
        for(ll i=n-1;i>=1;i--)
        {
            if(cumsum[i]==sum/3)
            {
                ans += twoby3;
                //cout<<ans<<endl;
            }
            if(cumsum[i]==2*(sum/3))
            {
                twoby3++;
            }
            
        }
        cout<<ans<<endl;
    }
    
}