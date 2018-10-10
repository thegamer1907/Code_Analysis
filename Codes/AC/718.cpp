#include <bits/stdc++.h>
#define re return
#define ll long long
#define ld long double
#define f first
#define s second
#define pi acos(-1)
#define oo (ll)1e9
#define OO (ll)1e18
#define EPS 1e-7
#define FX(n) fixed<<setprecision(n)
#define mm(o,k) memset(o,k,sizeof o)
#define IO ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
const int MAXN=100005;
int k,cnt;
bool done(int x){
    int sum=0;
    while(x)sum+=(x%10),x/=10;
    re sum==10;
}
int main(){
    IO;cin >> k;
    for(int i=1;i<=20000000;++i){
        if(done(i))++cnt;
        if(cnt==k){cout<<i<<endl;break;}
    }
    re 0;
}