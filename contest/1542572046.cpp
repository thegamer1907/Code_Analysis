#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
ll M[20];
int main()
{
    //ifstream cin("in.in");
    ll n,m,a;
    cin>>n>>m;
    for(ll i=0;i<n;i++){
        ll s=0,r=1;
        for(ll j=1;j<=m;j++){
            cin>>a;
            if(a==1){
                s=s+r;
            }
            r=r*2;
        }
        M[s]=1;
    }
    if(M[0]>0){
        cout<<"YES";
        return 0;
    }
    ll k=1<<m;
    /*for(ll i=0;i<k;i++){
        cout<<M[i]<<"\n";
    }*/
    for(ll i=0;i<k;i++){
        for(ll j=i+1;j<k;j++){
            if(M[i]==1 and M[j]==1){
                //cout<<i<<" "<<j<<" "<<(i&j)<<"\n";
                if((i&j)==0){
                    cout<<"YES";
                    return 0;
                }
            }
        }
    }
    cout<<"NO";
}
