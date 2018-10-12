#include <bits/stdc++.h>

using namespace std;

#define MOD 1000000007LL
#define ll long long
#define ill unsigned long long
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
#define ABS(x) ((x)<0?-(x):(x))
#define pnl printf("\n")
#define rep(i,n) for(long long int i=0;i<(n);i++)
#define rep2(i,a,b) for(long long int i=(a);i<(b);i++)
#define repr(i,n) for(long long int i=(n);i>=0;i--)

int main(){
    ll n,sum=0,x,m=0;
    cin>>n;
    rep(i,n){
        cin>>x;
        sum+=x;
        m = (x>m)?x:m;
    }
    cout<<MAX(m,(sum+n-2)/(n-1));
    return 0;
}
