#include <bits/stdc++.h>
using namespace std;
inline void read(int &x){
    char ch;
    bool flag=false;
    for (ch=getchar();!isdigit(ch);ch=getchar())if (ch=='-') flag=true;
    for (x=0;isdigit(ch);x=x*10+ch-'0',ch=getchar());
    x=flag?-x:x;
}

inline void read(long long &x){
    char ch;
    bool flag=false;
    for (ch=getchar();!isdigit(ch);ch=getchar())if (ch=='-') flag=true;
    for (x=0;isdigit(ch);x=x*10+ch-'0',ch=getchar());
    x=flag?-x:x;
}
inline void write(int x){
    static const int maxlen=100;
    static char s[maxlen];
        if (x<0) {   putchar('-'); x=-x;}
    if(!x){ putchar('0'); return; }
    int len=0; for(;x;x/=10) s[len++]=x % 10+'0';
    for(int i=len-1;i>=0;--i) putchar(s[i]);
}

const int MAXN = 110000;
int n,k;
int a[ 100 ];

int main(){
    read(n); read(k);
    for (int i=1;i<=n;i++)
        {
            int x=0,y;
            for (int j=1;j<=k;j++)
                {
                    read(y);
                    x=x*2+y;
                }
            a[x]++;
        }
    int flag=0;
    for (int i=0;i<100;i++)
        if( a[i] )
            for (int j=0;j<100;j++)
                if (a[j] )
                    if ( (i&j)==0)
                        flag=1;
    if (flag)
        puts("YES");
    else
        puts("NO");
    return 0;
}
