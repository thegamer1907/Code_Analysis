#include<iostream>
#include<cassert>
#include<cstring>
#include<algorithm>
#include<cmath>
#include<cstdio>
#include<string>
#include<vector>
#include<cstdlib>
#include<iterator>
#include<ctime>
#include<map>
#include<sstream>
#include<set>
#include<cctype>
#include<queue>
#include <memory.h>

using namespace std;

#define all(c) (c).begin(), (c).end()

template<typename T> inline string intToString(T x){ostringstream q;q << x;return q.str();}
template<typename T> inline T myPow(T x, T n, T MOD){T res = 1;while (n>0) {if (n & 1) {res = 1ll*res * x % MOD;}x = 1ll*x * x % MOD;n/=2;}return res;}
template<typename T> inline T gcd(T a, T b){a=abs(a);b=abs(b);while ((a>0) && (b>0)) {if (a>b)a%=b;else b%=a;}return a+b;}


typedef unsigned long long LLong;
typedef long double LDb;
long long n,m,k;
long long rec(long long q) {
    long long res = 0;
    for (int i = 1; i <= n; ++i) {
        long long w = q/i;
        if (w>m)
            w = m;
        res += w;
    }
    return res;
}

int main()
{
#ifdef m0stik
    freopen("input.txt","r",stdin);
#else
    //freopen("river.in","r",stdin);
    //freopen("river.out","w",stdout);
#endif
    cin >> n >> m >> k;
    long long l = 0;
    long long r = 1000000000000000000LL;
    while (l+1<r) {
        long long m = (l+r)>>1;
        long long q = rec(m);
        //cout << "M: " << m << "; q= " << q << endl;
        if (q<k) {
            l = m;
        }
        else {
            r = m;
        }
    }
    cout << r << endl;
    return 0;
} 