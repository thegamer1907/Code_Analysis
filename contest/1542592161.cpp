//china no.1
#pragma comment(linker, "/STACK:1024000000,1024000000")
#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <stack>
#include <cstring>
#include <queue>
#include <list>
#include <stdio.h>
#include <set>
#include <algorithm>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <cctype>
#include <sstream>
#include <functional>
#include <stdlib.h>
#include <time.h>
#include <bitset>
using namespace std;

#define pi acos(-1)
#define s_1(x) scanf("%d",&x)
#define s_2(x,y) scanf("%d%d",&x,&y)
#define s_3(x,y,z) scanf("%d%d%d",&x,&y,&z)
#define s_4(x,y,z,X) scanf("%d%d%d%d",&x,&y,&z,&X)
#define S_1(x) scan_d(x)
#define S_2(x,y) scan_d(x),scan_d(y)
#define S_3(x,y,z) scan_d(x),scan_d(y),scan_d(z)
#define PI acos(-1)
#define endl '\n'
#define srand() srand(time(0));
#define me(x,y) memset(x,y,sizeof(x));
#define foreach(it,a) for(__typeof((a).begin()) it=(a).begin();it!=(a).end();it++)
#define close() ios::sync_with_stdio(0); cin.tie(0);
#define FOR(x,n,i) for(int i=x;i<=n;i++)
#define FOr(x,n,i) for(int i=x;i<n;i++)
#define fOR(n,x,i) for(int i=n;i>=x;i--)
#define fOr(n,x,i) for(int i=n;i>x;i--)
#define W while
#define sgn(x) ((x) < 0 ? -1 : (x) > 0)
#define bug printf("***********\n");
#define db double
#define ll long long
#define mp make_pair
#define pb push_back
typedef long long LL;
typedef pair <int, int> ii;
const int INF=0x3f3f3f3f;
const LL LINF=0x3f3f3f3f3f3f3f3fLL;
const int dx[]={-1,0,1,0,1,-1,-1,1};
const int dy[]={0,1,0,-1,-1,1,-1,1};
const int maxn=105;
const int maxx=4e5+10;
const double EPS=1e-8;
const double eps=1e-8;
const int mod=1e9+7;
template<class T>inline T min(T a,T b,T c) { return min(min(a,b),c);}
template<class T>inline T max(T a,T b,T c) { return max(max(a,b),c);}
template<class T>inline T min(T a,T b,T c,T d) { return min(min(a,b),min(c,d));}
template<class T>inline T max(T a,T b,T c,T d) { return max(max(a,b),max(c,d));}
template <class T>
inline bool scan_d(T &ret){char c;int sgn;if (c = getchar(), c == EOF){return 0;}
while (c != '-' && (c < '0' || c > '9')){c = getchar();}sgn = (c == '-') ? -1 : 1;ret = (c == '-') ? 0 : (c - '0');
while (c = getchar(), c >= '0' && c <= '9'){ret = ret * 10 + (c - '0');}ret *= sgn;return 1;}

inline bool scan_lf(double &num){char in;double Dec=0.1;bool IsN=false,IsD=false;in=getchar();if(in==EOF) return false;
while(in!='-'&&in!='.'&&(in<'0'||in>'9'))in=getchar();if(in=='-'){IsN=true;num=0;}else if(in=='.'){IsD=true;num=0;}
else num=in-'0';if(!IsD){while(in=getchar(),in>='0'&&in<='9'){num*=10;num+=in-'0';}}
if(in!='.'){if(IsN) num=-num;return true;}else{while(in=getchar(),in>='0'&&in<='9'){num+=Dec*(in-'0');Dec*=0.1;}}
if(IsN) num=-num;return true;}

void Out(LL a){if(a < 0) { putchar('-'); a = -a; }if(a >= 10) Out(a / 10);putchar(a % 10 + '0');}
void print(LL a){ Out(a),puts("");}
//freopen( "in.txt" , "r" , stdin );
//freopen( "data.txt" , "w" , stdout );
//cerr << "run time is " << clock() << endl;
string s;
int n;
string a[105];
void solve()
{
    cin>>s;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]==s)
        {
            puts("YES");
            return ;
        }
        if(a[i][0]==s[1]&&s[0]==a[i][1])
        {
            puts("YES");
            return ;
        }
    }
    int cnt=0,cnt2=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i][0]==s[1])
            cnt=1;
        if(a[i][1]==s[0])
            cnt2=1;
    }
    if(cnt&&cnt2)
    {
        puts("YES");
        return ;
    }
    else puts("NO");
}

int main()
{
    //freopen( "in.txt" , "r" , stdin );
    //freopen( "data.txt" , "w" , stdout );
    int t=1;
    //s_1(t);
    for(int cas=1;cas<=t;cas++)
    {
        //printf("Case %d:\n",cas);
        solve();
    }
}

