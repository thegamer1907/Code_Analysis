#include <bits/stdc++.h>
using namespace std;
int t1,t2;
int ax[3];

int main()
{
    scanf("%d%d%d%d%d",&ax[0],&ax[1],&ax[2],&t1,&t2);
    if(ax[0]==12)ax[0]=0;
    ax[1]/=5;ax[2]/=5;
    int i,j,a,b,c;
    sort(ax,ax+3);
    if(t1>ax[0]&&t1<=ax[1]&&t2>ax[0]&&t2<=ax[1]){
        printf("YES");
        return 0;
    }
    if(t1>ax[1]&&t1<=ax[2]&&t2>ax[1]&&t2<=ax[2]){
        printf("YES");
        return 0;
    }
    if((t1>ax[2]||t1<=ax[0])&&(t2>ax[2]||t2<=ax[0])){
        printf("YES");
        return 0;
    }
    printf("NO");
    return 0;
}
