#include <bits/stdc++.h>
using namespace std;
using ll = long long;


ll n,q;

int main()
{
    cin >> n >> q;
    vector<ll> a(n);
    vector<ll> k(q);
    vector<ll> sacm(n);


    for(int i = 0;i < n;++i)
        cin >> a[i];

    for(int i = 0;i < q;++i)
        cin >> k[i];

    sacm[0] = a[0];
    for(int i = 1;i < n;++i)
        sacm[i] = sacm[i-1] + a[i];

    ll t = 0;

    for(int i=0; i<q; i++){
        ll temp = k[i]+t;
        ll r,l,m;
        l = 0;
        r = n-1;
        while(r>=l){
            m=(r+l)/2;
            if(temp>sacm[m]){
                l = m+1;
            }
            else{
                r = m-1;
            }
        }
        if(l>=n || (l==(n-1) && sacm[l]-temp==0)){
            cout<<n<<endl;
            t = 0;
        }
        else if(sacm[l]-temp==0){
            cout<<(n-l-1)<<endl;
            t = temp;
        }
        else{
            cout<<(n-l)<<endl;
            t = temp;
        }
    }

}