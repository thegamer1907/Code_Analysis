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
const int maxn = 205, maxk = 14, maxl = (1<<maxk);

int n, m;
bool tb[maxn][maxk][maxl];
string pre[maxn][maxk], suf[maxn][maxk], s;

int convert(string ss, int l, int r)
{
    int res = 0;
    for(int i = l; i <= r; i++){
        res *= 2;
        res += ss[i]-'0';
    }
    return res;
}

int check(int x, int k)
{

    //cout << pre[x][8] << endl;
    for(int i = 0; i < (1<<k); i++){
        //printf("check(%d,%d):%d\n",x,k,i);
        if(tb[x][k][i] == 0) return 0;
    }
    return 1;
}

int main()
{
    //frein;
    //freout;
    //fastio;
    cin >> n;
    memset(tb, 0, sizeof(tb));
    for(int i = 1; i <= n; i++){
        cin >> s; int sz = s.size();
        for(int len = 1; len < maxk; len++){
            for(int j = 0; j+len-1 < sz; j++){
                int tmp = convert(s,j,j+len-1);
                tb[i][len][tmp] = 1;
            }
            //printf("i:%d, len:%d\n",i,len);
            pre[i][len] = s.substr(0,min(len,sz));
            suf[i][len] = s.substr(max(0,sz-len), min(len,sz));
        }
    }
    cin >> m;
    int l,r, szl, szr;
    while(m--){
        n++;
        cin >> l >> r;
        for(int i = 0; i < maxk; i++){
            for(int j = 0; j < (1<<i); j++){
                tb[n][i][j] = tb[l][i][j] | tb[r][i][j];
            }
        }
        string comb;
        for(int i = 1; i < maxk; i++){
            comb = suf[l][i]+pre[r][i];
            /*printf("i:%d, comb:",i); cout << comb << " ";
            printf("suf:"); cout << suf[l][i] << " ";
            printf("pre:"); cout << pre[r][i] << endl;*/
            for(int j = 0; j+i-1 < comb.size(); j++){
                tb[n][i][convert(comb,j,j+i-1)] = 1;
            }
        }
        for(int i = 1; i < maxk; i++){
            szl = pre[l][i].size(); szr = pre[r][i].size();
            pre[n][i] = pre[l][i]+pre[r][i].substr(0,min(i-szl,szr));
            suf[n][i] = suf[l][i].substr(max(szl-i+szr,0),min(i-szr,szl))+suf[r][i];
            /*printf("suf[%d][%d]:",n,i); cout << suf[n][i] << " ";
            printf("suf[%d][%d].substr(%d,%d):",l,i,max(szl-i+szr,0),min(i-szr,szl)); cout << suf[l][i].substr(max(szl-i+szr-1,0),min(i-szr,szl))<<" ";
            printf("suf[%d][%d]:",r,i); cout << suf[r][i] << endl;*/
        }
        int ans;
        for(ans = 1; check(n,ans); ans++);
        //printf("id:%d, string:",n); cout << pre[n][16] << ":" << endl;
        /*for(int i = 0; i < (1<<3); i++){
            printf("tb[%d][%d]:%d\n",n,i,tb[n][3][i]);
        }*/
        printf("%d\n", ans-1);
    }
    return 0;
}
