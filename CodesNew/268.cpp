#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lp for(ll i=0; i<n; i++)

int main()
{
    ll n,m;
    cin>>n>>m;
    ll a[n+5];
    lp
        cin>>a[i];

    //sort(a, a+n);
    ll c=0,s=0,k=0,mx=0;
    lp{
        s+=a[i];
        while(s>m){
            s-=a[k];
            k++;
        }
        mx=max(mx,i-k+1);
    }
    cout<<mx<<endl;
}