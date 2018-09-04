#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

const int N=2010;

int n,m;
ll k;

ll check(ll mid){
    ll ans=0;
    for(int i=1;i<=n;i++){
        ll foo=mid-1;
        foo/=i;
        if(foo>m) foo=m;
        ans+=foo;
    }
    return ans;
}

int main(){
    //freopen("a.txt", "r", stdin);
    //freopen("answers.txt", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>n>>m>>k;
    ll l=1,r=1LL*n*m;
    while(r>l){
        ll mid=(l+r+1)>>1;
        if(check(mid)<k)
            l=mid;
        else
            r=mid-1;
    }
    cout<<l<<endl;

    return 0;
}