#include <bits/stdc++.h>
using namespace std;
int a[500001],n,t,l,r;

inline int read(){
   int s=0,w=1;
   char ch=getchar();
   while(ch<='0'||ch>'9'){if(ch=='-')w=-1;ch=getchar();}
   while(ch>='0'&&ch<='9') s=s*10+ch-'0',ch=getchar();
   return s*w;
}

bool cmp(int x,int y){
    return x<y;
}

int main(){
    n=read();
    for (int i=1;i<=n;i++){
        a[i]=read();
    }
    sort(a+1,a+n+1,cmp);
    l=(1+n)/2;
    r=n,t=n;
    while (r>=(1+n)/2+1 && l>=1){
        if (a[r]>=2*a[l]) t--,r--,l--;
        else l--;
    }
    printf("%d\n",t);
    return 0;
}