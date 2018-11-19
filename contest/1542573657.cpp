#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define INF 1061109567

int n,m,x[4];
int t[20];

bool check(int x,int y){
    x>>=4-m;y>>=4-m;
    while(x>0||y>0){
        if((x&1)&&(y&1))
            return 0;
        x>>=1;y>>=1;
    }
    return 1;
}

int main(){
    //freopen("in.in","r",stdin);
    //freopen("out.out","w",stdout);
    int i,j,v;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++) scanf("%d",&x[j]);
        v=x[0]*8+x[1]*4+x[2]*2+x[3];
        t[v]++;
    }
    if(t[0]) {printf("YES");return 0;}
    for(i=0;i<16;i++)
        for(j=0;j<16;j++)
            if(((i!=j)&&t[i]&&t[j]&&check(i,j))||((i==j)&&t[i]>=2&&check(i,j))) 
                {printf("YES");return 0;}
    printf("NO");
}