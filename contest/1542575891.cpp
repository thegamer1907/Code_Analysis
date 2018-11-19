//created by missever

#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int,int> P;

const int mod = 1e9 + 7;
const int maxn = 1e5 + 5;

int f[10];

int main() {
#ifdef CX_TEST
    freopen("E:\\program--GG\\test_in.txt", "r", stdin);
#endif
    int i;
    int a,b;
    for(i = 0;i < 3; i++) cin>>f[i];
    if(f[0] == 12) f[0] = 0;
    f[0] = f[0] * 3600 + f[1] * 60 + f[2];
    f[1] = f[1] * 720 + f[2];
    f[2] *= 720;
    sort(f,f + 3);
    cin>>a>>b;
    if(a == 12) a = 0;
    if(b == 12) b = 0;
    a *= 3600;
    b *= 3600;
    if(a > b) swap(a,b);
    if((a > f[0] && b < f[1]) || (a > f[1] && b < f[2]) || (a < f[0] && b > f[2]) || a > f[2] || b < f[0]) puts("YES");
    else puts("NO");
    return 0;
}
