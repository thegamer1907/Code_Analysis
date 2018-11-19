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
//at most 9 letters
struct Problem{
    int n,q;
    vector<string> s,tail;
    vector<vector<vector<int>>> dp;
    Problem(LL n):n(n),s(n),dp (200,vector<vector<int>>(10,vector<int>((1<<9)))){};

    void solve(){
        for(int i=0; i<n; ++i){
            cin >> s[i];
            tail.push_back(s[i]);
            for(int j=1; j<=min((int)s[i].size(),9); ++j){
                int tmp=0;
                for(int k=0; k<j; ++k){
                    tmp<<=1;
                    tmp+=s[i][k]-'0';
                }
                dp[i][j][tmp]=1;
                for(int k=j; k<(int)s[i].size(); ++k){
                    tmp<<=1;
                    if((tmp>>j)&1)tmp^=(1<<j);
                    tmp+=s[i][k]-'0';
                    dp[i][j][tmp]=1;
                }
            }
        }
        cin >> q;
        for(int i=0; i<q; ++i){
            int a,b; cin >> a >> b; --a;--b;
            for(int j=1; j<=9; ++j){
                for(int k=0; k<(1<<j); ++k){
                    dp[n+i][j][k]=dp[a][j][k]|dp[b][j][k];
                }
            }
            s.push_back(s[a]+s[b]);
            s[i+n]=s[i+n].substr(0,10);
            tail.push_back(tail[a]+tail[b]);
            tail[i+n]=tail[i+n].substr(max(0,(int)tail[i+n].size()-10));
            //s.push_back(s[a].substr(0,min(10,(int)s[a].size()))+s[b].substr((int)s[b].size()-min(10,(int)s[b].size())));
            for(int j=2; j<=min(9,(int)s[a].size()+(int)s[b].size()); ++j){
                string ns = tail[a].substr(max(0,(int)tail[a].size()-j+1));
                int len=(int)ns.size();
                ns+=s[b].substr(0,j-len);
                int tmp=0;
                for(int k=0; k<j; ++k){
                    tmp<<=1;
                    tmp+=ns[k]-'0';
                }
                dp[n+i][j][tmp]=1;
                for(int k=1; k<len; ++k){
                    DBG(j-len+k)
                    tmp<<=1;
                    if((tmp>>j)&1)tmp^=(1<<j);
                    if(j-len+k-1>=(int)s[b].size())break;
                    tmp+=s[b][j-len+k-1]-'0';
                    dp[n+i][j][tmp]=1;
                }
            }
            int ans =0;
            for(int j=1; j<=9; ++j){
                if(accumulate(dp[n+i][j].begin(),dp[n+i][j].end(),0)<(1<<j))break;
                ans=j;
            }
            cout << ans<<"\n";
        }
    }
};

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    long long n=0;
    cin >> n;
    Problem p(n);
    p.solve();
    return 0;
}

