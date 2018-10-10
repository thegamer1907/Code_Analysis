#include <bits/stdc++.h>
#define f first
#define s second
#define MP make_pair
#define PB push_back
#define LL long long
#define pii pair<int,int>
#define pll pair<LL,LL>
#define ALL(V) V.begin(),V.end()
#define f1(a,b) for(int a=1;a<=b;a++)
#define f0(a,b) for(int a=0;a<b;a++)
#define boost ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define endl "\n"
#define de(x) cout<<#x<<": "<<x<<endl
using namespace std;
const LL N=1e6+69, base=1024*1024,mod=1e9+7;
LL n,t[N],wynik;
set <LL> S;
int32_t main(void) {
    boost;
    cin>>n;
    LL sum=0;
    f0(i,n) {
        cin>>t[i];
        sum+=t[i];
        S.insert(sum);
    }
    LL zap=sum;
    sum=0;
    for(int i=n-1;i>=0;i--) {
        sum+=t[i];
        if(S.find(sum)!=S.end()&&sum*2<=zap) wynik=max(wynik,sum);
    }
    cout<<wynik<<endl;
}
