#include <bits/stdc++.h>
using namespace std;
inline void read(int &x){
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

const int MAXN = 10000;
char s[10000];
int n;
char tmp[1000];
bool vis[ 1000 ][100];

int main(){
    scanf("%s",s);
    read(n);
    bool flag=0;
    for (int i=1;i<=n;i++)
        {
            scanf("%s",tmp);
            if ( ( tmp[0]==s[0] )&& (tmp[1]==s[1]))
                flag=1;
            vis[ tmp[0] ][ 0 ]=1;
            vis[ tmp[1] ][ 1 ]=1;
        }
    if ( flag)
    {
        puts("YES");
        return 0;
    }
    if( (  vis[ s[0] ][ 1] ) && ( vis[ s[1] ][ 0 ] ) )
    {
        puts("YES");
        return 0;
    }
    puts("NO");
    return 0;
}
