#include <iostream>  
#include <cstdio>  
#include <cstdlib>  
#include <cstring>  
#include <string>  
#include <cmath>  
#include <set>  
#include <map>  
#include <stack>  
#include <queue>  
#include <ctype.h>  
#include <vector>  
#include <algorithm>  
#include <sstream>  
#define PI acos(-1.0)  
#define in freopen("in.txt", "r", stdin)  
#define out freopen("out.txt", "w", stdout)  
using namespace std;  
typedef long long ll;  
const int maxn = 1000 + 7, INF = 0x7f7f7f7f, mod = 1e9 + 7;  
int n;  
char s[4], t[6];  
  
int main() {  
    scanf("%s", s);  
    scanf("%d", &n);  
    int f1 = 0, f2 = 0;  
    for(int i = 0; i < n; ++i) {  
        scanf("%s", t);  
        if(t[0] == s[0] && t[1] == s[1]) { f1 = f2 = 1; }  
        if(t[0] == s[1]) f1 = 1;  
        if(t[1] == s[0]) f2 = 1;  
    }  
    if(f1 + f2 == 2) puts("YES");  
    else puts("NO");  
  
    return 0;  
}  