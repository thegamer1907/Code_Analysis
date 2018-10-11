/*
  ------------------------- Hachiikung ---------------------------------
  ---------------------- Worrachate Bosri ------------------------------
  ------ Faculty of Computer Engineering Chulalongkorn University ------
*/
#include <bits/stdc++.h>
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
const int MAXN();

int main(){

    int n,m;
    S("%d%d",&n,&m);

    map<string,int>a;

    int num = 0;

    REP(i,n)
    {
        string s;
        cin >> s;
        a[s]++;
    }

    REP(i,m)
    {
        string s;
        cin >> s;
        if(a[s] == 1)
            num++;
    }

    if(n-num+(num+1)/2 > m-num+num/2) P("YES");

    else P("NO");

}
