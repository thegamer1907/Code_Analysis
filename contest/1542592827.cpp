#include <iostream>
#include <cstdio>
#include <cctype>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
#include <set>
#include <stack>
#include <sstream>
#include <queue>
#include <map>
#include <functional>
#include <bitset>

using namespace std;
#define pb push_back
#define mk make_pair
#define ll long long
#define ull unsigned long long
#define pii pair<int, int>
#define mk make_pair
#define fi first
#define se second
#define ALL(A) A.begin(), A.end()
#define rep(i,n) for(int (i)=0;(i)<(int)(n);(i)++)
#define repr(i, n) for(int (i)=(int)(n);(i)>=0;(i)--)
#define repab(i,a,b) for(int (i)=(int)(a);(i)<=(int)(b);(i)++)
#define reprab(i,a,b) for(int (i)=(int)(a);(i)>=(int)(b);(i)--)
#define sc(x) scanf("%d", &x)
#define pr(x) printf("x:%d\n", x)
#define fastio ios::sync_with_stdio(0), cin.tie(0)
#define frein freopen("in.txt", "r", stdin)
#define freout freopen("out.txt", "w", stdout)
#define freout1 freopen("out1.txt", "w", stdout)
#define lb puts("")
#define PI M_PI
#define lson ((rt<<1)+1)
#define rson ((rt<<1)+2)
#define mid ((l+r)/2)
#define lmid (l+(r-l)/3)
#define rmid (r-(r-l)/3)
#define debug cout<<"???"<<endl

const double PI = 3.1415926535897932384626433;
const ll mod = 1000000007;
const int INF = 0x3f3f3f3f;
const double eps = 1e-8;
template<class T> T gcd(T a, T b){if(!b)return a;return gcd(b,a%b);}
const int maxn = 1e5, maxk = 10;

int t,n,tb[30], fuck[30];
string s, ss;
int main()
{
    //frein;
    //freout;
    memset(tb, 0, sizeof(tb));
    memset(fuck, 0, sizeof(fuck));
    cin >> s;
    int a1 = s[0]-'a', a2 = s[1]-'a';
    cin >> n;
    int flg = 0;
    while(n--){
        cin >> s;
        tb[s[0]-'a']++;
        fuck[s[1]-'a']++;
        if(s[0] -'a' == a1 && s[1]-'a' == a2) flg = 1;
    }
    if(flg || (fuck[a1]&&tb[a2])) printf("YES\n");
    else printf("NO\n");
    return 0;
}
