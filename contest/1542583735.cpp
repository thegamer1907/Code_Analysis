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
    int n,k;
    vector<int> cnt;
    Problem(LL n, LL k):n(n),k(k),cnt(16){};
    void yes(){cout <<"YES"<<"\n";exit(0);}
    void no(){cout <<"NO"<<"\n";exit(0);}
    void solve(){
        for(int i=0; i<n; ++i){
            int mask=0;
            for(int j=0; j<k; ++j){
                mask<<=1;
                int tmp; cin >> tmp;
                mask+=tmp;
            }
            cnt[mask]++;
        }
        if(cnt[0]>0)yes();
        if((cnt[1]>0)+(cnt[2]>0)+(cnt[4]>0)+(cnt[8]>0)>=2)yes();
        int w=0;
        for(int i=0; i<4; ++i){
            if(cnt[(1<<i)]>0){
                w=(1<<i);
                break;
            }
        }
        if(w==0){
            vector<int> pr={3,5,6,9,10,12};
            for(int i=0; i<(int)pr.size(); ++i){
                if(cnt[pr[i]]>0 and cnt[15-pr[i]]>0)yes();
            }
            no();
        }else{
            for(int i=0; i<4; ++i){
                int cover= w|(1<<i);
                if(cover == w) continue;
                if(cnt[15-cover]>0)yes();
            }
            if(cnt[15-w]>0)yes();
            no();
        }
    }
};

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    long long n=0,k;
    cin >> n >> k;
    Problem p(n,k);
    p.solve();
    return 0;
}

