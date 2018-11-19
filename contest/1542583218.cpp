#pragma comment(linker,"/STACK:102400000,102400000")
#include <cstring>
#include <cstdio>
#include <cctype>
#include <climits>
#include <iomanip>
#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <bitset>
#include <ctime>
#include <cmath>
using namespace std;
#define mem(a,b) memset(a,b,sizeof(a))
#define rep(i,l,r) for(int i=l,ed=r;i<ed;++i)
#define per(i,l,r) for(int i=r-1,ed=l;i>=ed;--i)
#define all(x) (x).begin(),(x).end()
#define SZ(x) ((int)(x).size())
#define pb push_back
#define mp make_pair
#define se second
#define sf(x) scanf("%d",&x)
#define db(x) cout<<#x<<"="<<(x)<<" "

typedef long long ll;
typedef double dd;
typedef vector<int> VI;
typedef pair<int,int> PII;
const ll LINF=0x3f3f3f3f3f3f3f3fLL;
const int INF=0x3f3f3f3f;
const dd EPS=1e-6;
const dd PI=acos(-1.0);

const ll mod=1e9+7;
const int N=201000;
int n,k;
int b[N];
int main(){
#ifndef ONLINE_JUDGE
    freopen("in.txt","r",stdin);
#endif
    scanf("%d%d",&n,&k);
    rep(i,0,n){
        int c=0;
        rep(j,0,k){
            int t;
            scanf("%d",&t);
            (c<<=1)|=t;
        }
        ++b[c];
    }
    bool ans=0;
    if(b[0])ans=1;
    rep(i,0,1<<4)
    rep(j,0,1<<4){
        if(((i&j)==0)&&b[i]&&b[j]){
            ans=1;
        }
    }
    puts(ans?"YES":"NO");
    return 0;
}

