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
LL n;
bool test(LL k) {
    LL jest=n;
    LL zj=0;
    while(jest) {
        //de(jest);
        zj+=min(k,jest);
        jest-=min(k,jest);
        LL huj=jest;
        huj/=10;
        jest-=huj;
    }
    if(zj*2>=n) return 1;
    return 0;
}
int32_t main(void) {
    boost;
    cin>>n;
    LL l=1;
    LL p=n;
    while(l<p) {
        LL sr=(l+p)/2;
        //de(sr);
        if(test(sr)) p=sr;
        else l=sr+1;
    }
    cout<<l<<endl;
}
