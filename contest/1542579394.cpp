#include <cstdio>
#include <iostream>
#include <cstring>
#include <bitset>
#define N 202
using namespace std;
int n,m;
char s[100];
int l[N],v1[N][15],v2[N][15],v[30];
bitset <32768> b[N][16];
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;++i){
        scanf("%s",s);
        int len=strlen(s);
        l[i]=min(15,len);
        for(int j=0;j<l[i];++j){
            v1[i][j]=s[j]-'0';
            v2[i][j]=s[len-j-1]-'0';
        }
        for(int j=0;j<len;++j){
            int st=0;
            for(int k=1;k<=15 && j+k-1<len;++k){
                st|=(s[j+k-1]-'0')<<(k-1);
                b[i][k][st]=1;
            }
        }
    }
    scanf("%d",&m);
    for(int i=1,x,y;i<=m;++i){
        scanf("%d%d",&x,&y);
        l[++n]=min(15,l[x]+l[y]);
        for(int j=0;j<l[n];++j){
            v1[n][j]=j<l[x] ? v1[x][j]:v1[y][j-l[x]];
            v2[n][j]=j<l[y] ? v2[y][j]:v2[x][j-l[y]];
        }
        for(int j=1;j<=15;++j)b[n][j]=b[x][j]|b[y][j];
        int len=0;
        for(int j=l[x]-1;j>=0;--j)v[len++]=v2[x][j];
        for(int j=0;j<l[y];++j)v[len++]=v1[y][j];
        for(int j=0;j<len;++j){
            int st=0;
            for(int k=1;k<=15 && j+k-1<len;++k){
                st|=v[j+k-1]<<(k-1);
                b[n][k][st]=1;
            }
        }
        int ans=0;
        for(int j=15;j;--j){
            int ok=1;
            for(int k=0;k<(1<<j);++k)
                if(!b[n][j][k]){ok=0;break;}
            if(ok){ans=j;break;}
        }
        printf("%d\n",ans);
    }
}
