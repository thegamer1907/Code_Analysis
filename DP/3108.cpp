#include <bits/stdc++.h>
using namespace std;
#define MAX 505
char G[MAX][MAX];
bool A[MAX][MAX][2];
int R[MAX][MAX];
int C[MAX][MAX];

int main(){
    int h,w;
    scanf("%d %d",&h,&w);

    for(int i=1;i<=h;i++) scanf("%s",&G[i][1]);

    for(int i=1;i<=h;i++) for(int j=1;j<=w;j++){
        A[i][j][0]=(G[i][j]=='.' && G[i][j+1]=='.');
        A[i][j][1]=(G[i][j]=='.' && G[i+1][j]=='.');
    }

    for(int i=1;i<=h;i++) for(int j=1;j<=w;j++){
        R[i][j]=R[i][j-1]+A[i][j][0];
        C[i][j]=C[i-1][j]+A[i][j][1];
    }

    int q;
    scanf("%d",&q);

    for(int i=1;i<=q;i++){
        int x1,y1,x2,y2;
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);

        int ans=0;
        for(int j=x1;j<=x2;j++) ans+=R[j][y2-1]-R[j][y1-1];
        for(int j=y1;j<=y2;j++) ans+=C[x2-1][j]-C[x1-1][j];
        printf("%d\n",ans);
    }
}
