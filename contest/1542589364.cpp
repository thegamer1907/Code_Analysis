#pragma GCC optimile("O3")
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
inline ull read()
{
        ull x=0,f=1; char ch=getchar();
        while(ch<'0'||ch>'9') {if(ch=='-') f=-1; ch=getchar();}
        while(ch<='9'&&ch>='0') {x=(x<<3)+(x<<1)+ch-'0'; ch=getchar();}
        return x*f;
}
bool line[26][26];
char a[110][3],junk;
int n,cnt;
int main()
{
        a[0][1]=getchar(); a[0][2]=getchar();
        n=read();
        for(int i=1; i<=n; i++)
        {
                a[i][1]=getchar(); a[i][2]=getchar(); junk=getchar();
                if(a[i][1]==a[0][1]&&a[i][2]==a[0][2]) {puts("YES"); return 0;}
                for(int j=1; j<=i; j++)
                {
                        if(a[i][2]==a[0][1]&&a[j][1]==a[0][2]) {puts("YES"); return 0;}
                        if(a[i][1]==a[0][2]&&a[j][2]==a[0][1]) {puts("YES"); return 0;}
                }
        }
        puts("NO");
        return 0;
}
