/******************************************************/
/******************************************************/
/**            BISMILLAHIR RAHMANIR RAHIM            **/
/**         Amantu Amir - Hacker               **/
/**  Department of Computer Science and Engineering  **/
/**            University  of Barisal               **/
/**                   Bangladesh                         **/
/******************************************************/
/******************************************************/
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<functional>
#include<iomanip>
#include<iostream>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<utility>
#include<vector>

#define nl printf("\n")
#define N 200100
#define pp pair<ll, ll>

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pfl(n) printf("%I64d ",n)
#define pfs(s) printf("%s",s)
#define pb push_back
#define WHITE 1
#define GRAY 2
#define BLACK 3

typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;

vector <int> G[N];
int color[N];
void dfsvisit(int x);
int Node;
int T;
bool check = false;

int main()
{
    int a;
    int n, t;
    sff(n, t);
    Node = n;
    T = t;
    for(int i = 1; i < n; i++)
    {
        sf(a);
        G[i].pb(a + i);
    }
    for(int i = 1; i <= n; i++)
    {
        color[i] = WHITE;
    }

    dfsvisit(1);
    cout << (check? "YES": "NO") << endl;

    return 0;
}


void dfsvisit(int x)
{
    color[x] = GRAY;

    for(int i = 0; i < G[x].size() && !check; i++)
    {
        if(color[G[x][i]] == WHITE)
        {
            if(G[x][i] == T)
            {
                check = true;
            }

            dfsvisit(G[x][i]);
        }
    }
    color[x] = BLACK;
}


/*****************  ALHAMDULILLAH  *****************/

