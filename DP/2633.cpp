#include<bits/stdc++.h>
using namespace std;

int cnt=0;
int m;
int ans[100100];

int dfs(int pos,int mx,int sum){
    if(pos>=mx){
        if(sum==10){
            cnt++;
            if(cnt==m)return 1;
        }

        return 0;
    }
    int low=pos==0?1:0;
    for(int j=low;j<=min(9,10-sum);j++){
        ans[pos]=j;
        if(dfs(pos+1,mx,sum+j)) return 1;
    }
    return 0;
}

int main(){

    scanf("%d",&m);

    for(int i=1;i<=100000;i++){
        if(dfs(0,i,0)){
            for(int j=0;j<i;j++)printf("%d",ans[j]);
            printf("\n");break;
        }
    }
    return 0;
}
