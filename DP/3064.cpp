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
const int MAXN(3005);

int s[MAXN], c[MAXN], a[MAXN];

int main(){

    int n;
    S("%d",&n);
    REP(i,n)
        S("%d",&s[i]);
    REP(i,n)
        S("%d",&c[i]);

    REP(i,n)
        a[i] = INF;

    REP(i,n)
        FOR(j,0,i-1)
        {
            if(s[j] < s[i])
                a[i] = min(a[i], c[i]+c[j]);
        }

    int ans = INF;

    REP(i,n)
        FOR(j,0,i-1)
        {
            if(s[j] < s[i])
                ans = min(ans, c[i]+a[j]);
        }

    if(ans >= INF) P("-1");
    else P("%d",ans);

}
