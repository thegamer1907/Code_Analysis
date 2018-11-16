#pragma GCC target("avx")
#pragma GCC optimize(3)
#pragma GCC optimize("Ofast")
#pragma GCC optimize("inline")
#pragma GCC optimize("-fgcse")
#pragma GCC optimize("-fgcse-lm")
#pragma GCC optimize("-fipa-sra")
#pragma GCC optimize("-ftree-pre")
#pragma GCC optimize("-ftree-vrp")
#pragma GCC optimize("-fpeephole2")
#pragma GCC optimize("-ffast-math")
#pragma GCC optimize("-fsched-spec")
#pragma GCC optimize("unroll-loops")
#pragma GCC optimize("-falign-jumps")
#pragma GCC optimize("-falign-loops")
#pragma GCC optimize("-falign-labels")
#pragma GCC optimize("-fdevirtualize")
#pragma GCC optimize("-fcaller-saves")
#pragma GCC optimize("-fcrossjumping")
#pragma GCC optimize("-fthread-jumps")
#pragma GCC optimize("-funroll-loops")
#pragma GCC optimize("-fwhole-program")
#pragma GCC optimize("-freorder-blocks")
#pragma GCC optimize("-fschedule-insns")
#pragma GCC optimize("inline-functions")
#pragma GCC optimize("-ftree-tail-merge")
#pragma GCC optimize("-fschedule-insns2")
#pragma GCC optimize("-fstrict-aliasing")
#pragma GCC optimize("-fstrict-overflow")
#pragma GCC optimize("-falign-functions")
#pragma GCC optimize("-fcse-skip-blocks")
#pragma GCC optimize("-fcse-follow-jumps")
#pragma GCC optimize("-fsched-interblock")
#pragma GCC optimize("-fpartial-inlining")
#pragma GCC optimize("no-stack-protector")
#pragma GCC optimize("-freorder-functions")
#pragma GCC optimize("-findirect-inlining")
#pragma GCC optimize("-fhoist-adjacent-loads")
#pragma GCC optimize("-frerun-cse-after-loop")
#pragma GCC optimize("inline-small-functions")
#pragma GCC optimize("-finline-small-functions")
#pragma GCC optimize("-ftree-switch-conversion")
#pragma GCC optimize("-foptimize-sibling-calls")
#pragma GCC optimize("-fexpensive-optimizations")
#pragma GCC optimize("-funsafe-loop-optimizations")
#pragma GCC optimize("inline-functions-called-once")
#pragma GCC optimize("-fdelete-null-pointer-checks")
#include<set>
#include<map>
#include<queue>
#include<stack>
#include<cmath>
#include<cstdio>
#include<time.h>
#include<vector>
#include<cstring>
#include<stdlib.h>
#include<iostream>
#include<algorithm>
#define LL long long
using namespace std;
const LL N=1e7+10;
const LL mod=1e9+9;
const LL inf=0x3f3f3f3f;
namespace FastIO
{
    template<typename tp> inline void read(tp &x)
    {
        x=0; register char c=getchar(); register bool f=0;
        for(;c<'0'||c>'9';f|=(c=='-'),c = getchar());
        for(;c>='0'&&c<='9';x=(x<<3)+(x<<1)+c-'0',c = getchar());
        if(f) x=-x;
    }
    template<typename tp> inline void write(tp x)
    {
        if (x==0) return (void) (putchar('0'));
        if (x<0) putchar('-'),x=-x;
        LL pr[20]; register LL cnt=0;
        for (;x;x/=10) pr[++cnt]=x%10;
        while (cnt) putchar(pr[cnt--]+'0');
    }
    template<typename tp> inline void writeln(tp x)
    {
        write(x);
        putchar('\n');
    }
}
using namespace FastIO;
int n;
int ans;
int main()
{
    read(n);
    ans=n/2;
    writeln(ans);
    for(int i=1;i<ans;i++)
        printf("2 ");
    if(n%2==1)
        printf("3\n");
    else
        printf("2\n");
    return 0;
}