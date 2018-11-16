//What is love?

#include <iostream>
#include <stdio.h>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <string>
#include <cstring>
#include <algorithm>
#include <math.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

#define FOR(i,n,m) for(int i=n; i<m; i++)
#define ROF(i,n,m) for(int i=n; i>m; i--)
#define pb push_back
#define lb lower_bound
#define ub upper_bound
#define F first
#define S second
#define ri(a) scanf("%d",&a)
#define rii(a,b) scanf("%d %d",&a,&b)
#define riii(a,b,c) scanf("%d %d %d",&a,&b,&c)
#define lri(a) scanf("%d",&a)
#define lrii(a,b) scanf("%d %d",&a,&b)
#define ms(obj,val) memset(obj,val,sizeof(obj))

const int INF = 0x3f3f3f3f;
const int MOD = 1e9+7;
const int MAXN = 2e2+5;
const ll INFLL = 1e18;

//Baby don't hurt me



//Don't hurt me

int main(){
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    int n;
    ri(n);
    int x = 0, y = 0, z = 0;
    FOR(i,0,n){
        int xx,yy,zz;
        riii(xx,yy,zz);
        x+=xx; y+=yy; z+=zz;
    }
    if(x==0 && y ==0 && z == 0) printf("YES\n");
    else printf("NO\n");

    return 0;
}

//No more