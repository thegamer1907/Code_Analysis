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
int h[5],sixsixsix,omg;
int main()
{
        h[1]=read(); h[2]=read(); h[3]=read(); sixsixsix=read(); omg=read();
        if(h[1]==12) h[1]=0;
        if(sixsixsix==12) sixsixsix=0;
        if(omg==12) omg=0;
        h[1]*=5; sixsixsix*=5; omg*=5;
        sort(h+1,h+3+1);
        if(sixsixsix>h[1]&&sixsixsix<=h[2]&&omg>h[1]&&omg<=h[2]) {puts("YES"); return 0;}
        if(sixsixsix>h[2]&&sixsixsix<=h[3]&&omg>h[2]&&omg<=h[3]) {puts("YES"); return 0;}
        if(((sixsixsix>h[3]&&sixsixsix<60)||(sixsixsix>=0&&sixsixsix<=h[1]))&&((omg>h[3]&&omg<60)||(omg>=0&&omg<=h[1]))) {puts("YES"); return 0;}
        {puts("NO"); return 0;}
}
