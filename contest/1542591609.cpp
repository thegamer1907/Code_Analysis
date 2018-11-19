
#include<bits/stdc++.h>
using namespace std;
#pragma comment(linker, "/STACK:102400000,102400000")
#define rep(i,a,b) for (int i=a; i<=b; ++i)
#define per(i,b,a) for (int i=b; i>=a; --i)
#define mes(a,b)  memset(a,b,sizeof(a))
#define INF 0x3f3f3f3f
#define MP make_pair
#define PB push_back
#define fi  first
#define se  second
typedef long long ll;
const int N = 200005;

char s[10], ss[10];
int n;
bool flag1, flag2;
int main()
{
    scanf("%s", s);
    scanf("%d", &n);
    rep(i,1,n)
    {
        scanf("%s", ss);
        if(ss[0]==s[0] && ss[1]==s[1]) flag1=flag2=true;
        if(ss[0]==s[1]) flag1=true;
        if(ss[1]==s[0]) flag2=true;
    }
    if(flag1 && flag2) puts("YES");
    else puts("NO");

    return 0;
}
