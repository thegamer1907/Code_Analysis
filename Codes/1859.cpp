#include<bits/stdc++.h>
#define ll long long
#define ld long double
#define pb push_back
#define x first
#define y second
#define fastread ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI (atan(1)*4)
#define mp make_pair
using namespace std;
ll n,m,k;


ll check(ll num){
    ll ans=0;
    for(int i=1;i<=n;i++){
        ans+=min(num/i,m);
    }
    return ans;
}

ll bsrch(ll l,ll r){
    if(l==r)
        return l;
    else if(l==(r-1)){
        if(check(l)>=k)
            return l;
        else
            return r;
    }
    ll mid=(l+r+1)/2;
    if(check(mid)>=k)
        return bsrch(l,mid);
    else
        return bsrch(mid+1,r);
}

int main()
{
    fastread;
    cin>>n>>m>>k;   
    cout<<bsrch(1,n*m);
    return 0;
}