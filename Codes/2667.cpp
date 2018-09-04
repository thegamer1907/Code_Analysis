#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;

const int MAXN=1e6+5;

int f[MAXN],vis[MAXN];
char s[MAXN];

void print(int x){
    for(int i=0;i<x;i++)
        putchar(s[i]);
    exit(0);
}

int main(){
    scanf("%s",s);
    int len=strlen(s);
    for(int i=1;i<len;i++){
        int j=f[i];
        while(j&&s[i]!=s[j]) j=f[j];
        f[i+1]=(s[i]==s[j])?j+1:0;
    }
    for(int i=1;i<len;i++)
        vis[f[i]]=1;
    int now=f[len];
    while(now&&!vis[now]) now=f[now];
    if(!now) return puts("Just a legend"),0;
    print(now);
}
