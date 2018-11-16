/*
  ------------------------- Hachiikung ---------------------------------
  ---------------------- Worrachate Bosri ------------------------------
  ------ Faculty of Computer Engineering Chulalongkorn University ------
*/
#include <bits/stdc++.h>
//#include "testlib.h"
using namespace std;
#define REP(i,FN) for(int i=0;i<FN;i++)
#define FOR(i,ST,FN) for(int i=ST;i<=FN;i++)
#define FORD(i,FN,ST) for(int i=FN;i>=ST;i--)
#define FORX(i,c) for(typeof(c.begin())i=c.begin();i!=c.end();i++)
#define pause system("pause")
#define S scanf
#define P printf
#define X first
#define Y second
#define pb push_back
#define PII pair<int,int>
#define mp make_pair
#define sz size()
#define eps 1e-8

const int MOD(1000000007);
const int INF((1<<30)-1);
const int MAXN(105);

int a[MAXN], dp[MAXN][MAXN];

int main(){

    int n,B;
    S("%d%d",&n,&B);
    FOR(i,1,n)
        S("%d",&a[i]);

    FOR(i,0,n)
        FOR(j,0,B)
            dp[i][j] = -INF;

    dp[0][0] = 0;

    FOR(i,1,n)
        FOR(j,0,B)
        {
            int c = 0;

            FORD(k,i,1)
            {
                c += (a[k]%2 == 0);
                c -= (a[k]%2 == 1);

                if(c != 0) continue;

                if(i != n && abs(a[i]-a[i+1]) <= j) dp[i][j] = max(dp[i][j], dp[k-1][j-abs(a[i]-a[i+1])]+1);
                else if(i == n) dp[i][j] = max(dp[i][j], dp[k-1][j]+1);
            }
        }

    int ans = 0;

    FOR(i,0,B)
        ans = max(ans, dp[n][i]);

    P("%d",ans-1);

}
