#pragma comment(linker, "/STACK:1024000000,1024000000")
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <string>
using namespace std;
#define LL long long
#define mp make_pair
#define fr first
#define sc second
#define pb push_back
#define lc (x<<1)
#define rc ((x<<1)|1)
const int N=205,M0=12,M=4096;
struct Str{
    int k,l0,l1;
    bool v[M0][M];
    char s0[M0+5],s1[M0+5];
    int calk(){
        int i,j;
        for (j=0;j<M0;j++){
            for (i=0;i<(1<<(j+1));i++) if (!v[j][i]) break;
            if (i<(1<<(j+1))) return j;
        }
        return j;
    }
    void init(char *s){
        memset(v,0,sizeof(v));
        int i,j,n=strlen(s+1);
        for (i=1;i<=n;i++){
            int x=0;
            for (j=0;j<M0&&i+j<=n;j++){
                x=(x<<1)+(s[i+j]-'0');
                v[j][x]=1;
            }
        }
        k=this->calk();
        for (i=1;i<=M0;i++){
            if (i>n) break;
            s0[i]=s[i],s1[i]=s[n-i+1];
        }
        l0=l1=i-1;
    }
    int work(const Str &a,const Str &b){
        memset(v,0,sizeof(v));
        int i,j,x,y;
        for (j=0;j<M0;j++)
         for (i=0;i<M;i++)
          v[j][i]=(a.v[j][i]||b.v[j][i]);

        for (i=1,y=0;i<=a.l1;i++){
            y=y+(a.s1[i]-'0')*(1<<(i-1));
            for (j=1,x=y;i+j<=M0&&j<=b.l0;j++){
                x=(x<<1)+(b.s0[j]-'0');
                v[i+j-1][x]=1;
            }
        }
        k=this->calk();

        l0=min(a.l0+b.l0,M0);
        for (i=1;i<=a.l0;i++) s0[i]=a.s0[i];
        if (a.l0<M0) for (j=1;i<=l0;j++,i++) s0[i]=b.s0[j];
        l1=min(a.l1+b.l1,M0);
        for (i=1;i<=b.l1;i++) s1[i]=b.s1[i];
        if (b.l1<M0) for (j=1;i<=l1;j++,i++) s1[i]=a.s1[j];

        return k;
    }
    void PRT(){
        int i,j;
        puts("");puts("");
        for (i=0;i<(1<<(k+1));i++) printf("%d",v[k][i]);
        puts("");printf("%d\n",k);
        for (i=1;i<=l0;i++) printf("%c",s0[i]);
        puts("");
        for (i=l1;i>=1;i--) printf("%c",s1[i]);
        puts("");puts("");
    }
};
Str a[N];
int main(){
   // freopen("in.txt","r",stdin);freopen("out.txt","w",stdout);
    int i,n,q;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        char s[105];
        scanf("%s",s+1);
        a[i].init(s);
    }
    scanf("%d",&q);
    for (i=1;i<=q;i++){
        int x,y;
        scanf("%d%d",&x,&y);
        printf("%d\n",a[n+i].work(a[x],a[y]));
    }

    return 0;
}
