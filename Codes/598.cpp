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

bool perfect(int num){

    int ret = 0;

    while(num > 0)
    {
        ret += num%10;
        num /= 10;
    }

    return ret == 10;

}

int main(){

    int n;
    S("%d",&n);

    int num = 19;

    while(true)
    {
        if(perfect(num)) n--;

        if(n == 0)
        {
            P("%d",num);
            return 0;
        }

        num++;
    }

}
