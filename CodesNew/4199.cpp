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
LL n,q;
vector <LL> vek;
int32_t main(void) {
    boost;
    cin>>n>>q;
    f0(i,n) {
        int a;
        cin>>a;
        vek.PB(a);
        if(i!=0) vek[i]+=vek[i-1];
    }
    //f0(i,n) cout<<vek[i]<<" ";
    //cout<<endl;
    LL suma=0;
    while(q--) {
        LL k;
        cin>>k;
        suma+=k;
        auto it=upper_bound(ALL(vek),suma);
        if(it==vek.end()) {
            suma=0;
            it=vek.begin();
        }
        int zm=vek.end()-it;
        cout<<zm<<endl;
    }
}
