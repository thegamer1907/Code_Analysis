#include <bits/stdc++.h>
typedef long long int LL;
using namespace std;

const int N = 40000 +7;
/*****************************************/
int n,k;
int h[111];
int main(){
    memset(h,0,sizeof(h));
    scanf("%d%d",&n,&k);
    int flag = 0;
    for(int i=1;i<=n;i++){
        int x= 0,y;
        for(int j=0;j<k;j++){
            scanf("%d",&y);
            x|=y<<j;
        }
        if(x == 0) flag = 1;
        h[x]++;
    }
    for(int i=0;i<16;i++){
        for(int j=0;j<16;j++){
            if(i&j) continue;
            if(h[i]&&h[j]){
//                printf("%d %d\n",i,j);
                flag = 1;
            }
        }
    }
    puts(flag?"YES":"NO");
    return 0;
}
/**
4 4
1 0 0 1
1 1 0 0
0 0 1 1
0 1 1 0
**/
