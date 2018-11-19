#include <bits/stdc++.h>
using namespace std;
//make_tuple emplace_back next_permutation push_back make_pair second first setprecision

#if MYDEBUG
#include "lib/cp_debug.h"
#else
#define DBG(...) ;
#endif

using LL = long long;
constexpr LL LINF=334ll<<53;
constexpr int INF=15<<26;
constexpr LL  MOD=1E9+7;

struct Problem{
    int h,m,s,x,y;
    double hh,mm,ss,xx,yy;

    void solve(){
        cin >> h >> m >> s >> x >> y;
        xx=30.0*(x%12);
        yy=30.0*(y%12);
        ss=6.0*s;
        mm=6.0*m+0.1*s;
        hh=30.0*(h%12)+0.5*m+0.5/60*s;
        map<double,char> m;
        m[xx]='x';
        m[yy]='y';
        m[hh]='h';
        m[mm]='m';
        m[ss]='s';
        bool ans =false;
        auto b = *m.begin();
        m[b.first+360]=b.second;
        for(auto it = m.begin();it!=m.end(); it++){
            if(it->second == 'x'){
                auto it2 = it;
                it2++;
                if(it2!=m.end() and it2->second=='y'){
                    ans=true;
                    break;
                }
            }
            if(it->second == 'y'){
                auto it2 = it;
                it2++;
                if(it2!=m.end() and it2->second=='x'){
                    ans=true;
                    break;
                }
            }
        }
        if(ans)cout << "YES"<<"\n";
        else cout <<"NO"<<"\n";
    }
};

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    Problem p;
    p.solve();
    return 0;
}

