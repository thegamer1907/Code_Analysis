#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <queue>
#include <cassert>
#include <map>
#include <stack>
#include <cmath>
#include <sstream>

inline int rd(){
    char ch;
    while(ch=getchar(),(ch<'0'||ch>'9')&&ch!='-');
    if (ch=='-'){
        int s=0;
        while(ch=getchar(),ch>='0'&&ch<='9')s=s*10+ch-'0';
        return -s;
    }
    int s=ch-'0';
    while(ch=getchar(),ch>='0'&&ch<='9')s=s*10+ch-'0';
    return s;
} // input accelerate

#define lson pos << 1
#define rson pos << 1 | 1
#define pb push_back
#define all(x) (x).begin(),(x).end()

#define se second
#define ll long long

using namespace std;

const double eps = 1e-8;
const int INF = 0x3f3f3f3f;
const int maxn = 1e2+10;
ll mod = 998244353;
const double PI = 3.141592653589793238462643383279;

int n;
int a[maxn];
int main(int argc,char *argv[])
{
    n = rd();
    int res1 = 0, t = 0, res2 = 0;
    for (int i = 1; i <= n; ++i) {
        a[i] = rd();
        if (a[i]) res1++;
        if (!a[i]) {
            t++;
            if (res2 < t) res2 = t;
        } else if (t) t--;
    }
    if (res2 == 0) res1--;
    printf("%d\n", res1 + res2);
    return 0;
}