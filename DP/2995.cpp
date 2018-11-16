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
const int MAXN(1000005);

char a[MAXN], b[MAXN];

int main(){

    int n;
    S("%d%s%s",&n,a,b);

    int ans = 0;

    REP(i,n)
    {
        if(a[i] != b[i])
        {
            if(i+1 < n && a[i+1] != b[i+1] && a[i] != a[i+1])
            {
                a[i+1] = b[i+1];
            }

            a[i] = b[i];
            ans++;
        }
    }

    P("%d",ans);

}
