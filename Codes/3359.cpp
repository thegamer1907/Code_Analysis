#include<bits/stdc++.h>
using namespace std;
#define ll int long long
bool check(ll n,ll k){
    ll sum=0;
    ll curr=n;
    ll w;
    ll mk;
    while(curr){
        mk=curr;
        w=min(curr,k);
        sum += w;
        curr-= w;
        curr -= curr/10;
        if(mk==curr)break;
       
    }
    if(sum*2>=n)return true;
    else return false;
}
int main()
{
    ll n;
    cin>>n;
    ll l,r;
    l=0;r=n;
    while(l<r){
        
        ll mid=(l+r)/2;
   
        if(check(n,mid)){
            r=mid;
        }
        else{
            l=mid+1;
        }
    }
    cout<<r;


}