//AUTOR:MURRUGARRA JEFFRI ERWIN
//UNIVERSIDAD: UNIVERSIDAD NACIONAL DE TRUJILLO
#include <bits/stdc++.h>

#define REP(i, a) for( int i = 0; i < a; i++ )
#define RFOR(i,x,y) for(int i = x; i>= y; i--)
#define FOR(i,x,y) for (int i = x; i < y; i++)
#define ITFOR(it,A) for(typeof A.begin() it = A.begin(); it!=A.end(); it++)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define VE vector <int>
#define mset(A,x) memset(A, x, sizeof A)
#define PB push_back
#define ones(x) __builtin_popcount(x)
#define cua(x) (x)*(x)
#define debug(x) cout <<#x << " = " << x << endl
#define adebug(x,n) cout <<#x<<endl; REP(i,n)cout<<x[i]<<char(i+1==n?10:32)
#define mdebug(x,m,n) cout <<#x<<endl; REP(i,m)REP(j,n)cout<<x[i][j]<<char(j+1==n?10:32)
#define LSOne(S) (S&(-S))

using namespace std;

#define ll long long
#define lli long long int
#define PI acos(-1.0)
#define ii pair<int,int>
#define inf_ll (((1LL<<62)-1)<<1)+1
#define inf_i (1<<31)-1

int main(){
/*
   freopen("input.txt", "r", stdin);
   freopen("out.txt", "w", stdout);
*/
int n,m;
scanf("%d %d",&n,&m);
int matriz[100005][5];
int valores[]={8,4,2,1};
REP(i,n)
    REP(j,m)
        scanf("%d",&matriz[i][j]);

int freq[16];
REP(i,n)
{
    int val=0;
    RFOR(j,m-1,0)
    {
        val+=matriz[i][j]*valores[j];
    }
    freq[val]=1;
}

bool band=false;
REP(i,16)
{
    if(freq[i]==1)
    {
        REP(j,16)
        {
            if(freq[j]==1)
            {
                int val=i&j;
                if(val==0)
                {
                    //debug(i);
                    //debug(j);
                    band=true;
                }

            }
        }
    }

}
(band)?printf("YES\n"):printf("NO\n");
/*
    fclose(stdin);
    fclose(stdout);
*/

    return 0;
}


