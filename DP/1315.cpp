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
    int res = 0;
    for (int i = 1; i <= n; ++i) a[i] = rd();
    for (int i = 1; i <= n; ++i) {
        for (int j = i; j <= n; ++j) {
            int temp = 0;
            for (int k = 1; k <= n; ++k) {
                if (a[k] ^ (k >= i && k <= j)) temp++;
            }
            res = max(res, temp);
        }
    }
    printf("%d\n", res);
    return 0;
}