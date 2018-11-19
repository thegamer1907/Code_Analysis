#include<iostream>
#include<algorithm>
#include<cstdio>
#include<ctime>
#include<cstring>
#include<cmath>
#include<map>
#include<set>
#include<vector>
#include<assert.h>
#include<queue>
#include<stack>
#include<string>
#define fi first
#define se second
#define lson l,mid,o<<1
#define rson mid+1,r,o<<1|1
using namespace std;
typedef long long LL;
typedef unsigned long long uLL;
typedef pair<int, int> P;
typedef pair<P, P> PII;
const LL INF = 0x3f3f3f3f;
const int N = 1e5 + 10;
const LL mod = 1e9 + 7;
const double PI = acos(-1);

char s[10], t[10];
int main() {
    bool v1  = false, v2 = false, v3 = false;
    scanf("%s", s);
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; ++i){
        scanf("%s", t);
        if(s[1] == t[0])    v1 = true;
        if(s[0] == t[1])    v2 = true;
        if(s[0] == t[0] && s[1] == t[1])    v3 = true;
    }
    if(v1 && v2)    puts("YES");
    else if(v3)   puts("YES");
    else puts("NO");
	return 0;
}
