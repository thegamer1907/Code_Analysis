#include <bits/stdc++.h>
using namespace std;
int n,m;
char ax[105][105];
bitset<5000> bx[205][13];
char cx[205][20];
char dx[205][20];

void yuchuli(){
    int x,i,j,a,b;
    for(x=1;x<=n;x++){
        int len = strlen(ax[x]);
        if(len<=12){
            strcpy(cx[x],ax[x]);
            strcpy(dx[x],ax[x]);
        }
        else {
            strcpy(cx[x],ax[x]+len-12);
            strcpy(dx[x],ax[x]);
            dx[x][12]='\0';
        }
        for(i=1;i<=12;i++){
            if(i>len)break;
            int now = 0;
            for(j=0;j<i;j++){
                now *= 2;
                now += ax[x][j]-'0';
            }
            bx[x][i].set(now);
            for(;j<len;j++){
                now %= (1<<(i-1));
                now *= 2;
                now += ax[x][j]-'0';
                bx[x][i].set(now);
            }
        }
    }
}

void play(int x,int a,int b){
    int i,j,x1,x2,num,now;
    int l1=strlen(cx[a]),l2=strlen(dx[b]);
    for(i=2;i<=12;i++){
            x1=0;x2=0;
        for(j=0;j<min(i-1,l2);j++){
            x2 *= 2;x2+=dx[b][j]-'0';
        }
        for(j=l1-1,num=1;j>=0&&j>l1-i;j--,num++){
            x1 = x1 + (cx[a][j]-'0')*(1<<(num-1));
            if(l2+num<i)continue;
            now = x1*(1<<(i-num))+x2;
            x2 /= 2;
            bx[x][i].set(now);
        }
    }
    strcpy(dx[x],dx[a]);
    if(strlen(dx[x])<12){strcat(dx[x],dx[b]);dx[x][12]='\0';}
    if(strlen(cx[b])==12)strcpy(cx[x],cx[b]);
    else{
        num = strlen(cx[b]);
        if(strlen(cx[a])+num<12){
            strcpy(cx[x],cx[a]);
        }
        else{
            strcpy(cx[x],cx[a]+strlen(cx[a])-12+num);
        }
        strcat(cx[x],cx[b]);
    }
    for(i=1;i<=12;i++){
        if(bx[x][i].count()!=(1<<i))break;
    }
    printf("%d\n",i-1);
}

int main()
{
 //   freopen("o.txt","r",stdin);
  //  freopen("w.txt","w",stdout);
    scanf("%d",&n);
    int i,j,a,b;
    for(i=1;i<=n;i++)scanf("%s",ax[i]);
    yuchuli();
    scanf("%d",&m);
    for(i=1;i<=m;i++){
        scanf("%d%d",&a,&b);
        for(j=1;j<=12;j++){
            bx[n+i][j] |= bx[a][j];
            bx[n+i][j] |= bx[b][j];
        }
        play(n+i,a,b);
    }
    return 0;
}
