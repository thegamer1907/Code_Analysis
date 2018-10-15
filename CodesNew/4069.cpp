#include <bits/stdc++.h>
#define ll long long int
using namespace std;


int main() {

    ll n,q;
    cin>>n>>q;

    vector<ll> v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    vector<ll> prefix(n);

    prefix[0]=v[0];
    for(ll i=1;i<n;i++){
        prefix[i]=prefix[i-1]+v[i];
    }

    ll prev=0;
    for(ll i=0;i<q;i++){
        ll x;
        cin>>x;
        x+=prev;
        if(x>=prefix[n-1]){
            cout<<n<<endl;
            prev=0;
        }
        else{
            prev=x;
            ll l=0;
            ll h=n-1;
            ll mid;
            while(h-l>1){
                mid=(l+h)/2;
                if(prefix[mid]<=x){
                    l=mid;
                }
                else{
                    h=mid-1;
                }
            }
            if(prefix[l]>x){
                cout<<n-(l)<<endl;
            }
            else if(prefix[h]<=x){
                cout<<n-(h+1)<<endl;
            }
            else{
                cout<<n-(l+1)<<endl;
            }
        }
    }
}