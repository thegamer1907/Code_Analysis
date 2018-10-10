#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

int main()
{
    int k,dp[15][15];
    memset(dp,0,sizeof(dp));
    scanf("%d",&k);
    for(int i=0;i<10;i++) dp[0][i]=1;
    for(int i=1;i<10;i++){
        for(int j=0;j<=10;j++){
            for(int p=0;p<=j&&p<=9;p++)
                dp[i][j]+=dp[i-1][j-p];
        }
    }
    int sum=10,cnt=0,flag=0;
    for(int i=9;i>0;i--){
        for(int j=0;j<10;j++){
            if(cnt+dp[i-1][sum-j]>=k){
                if(j!=0 || flag){
                    printf("%d",j);
                    flag=1;
                }
                sum-=j;
                break;
            }
            cnt+=dp[i-1][sum-j];
        }
    }
    printf("%d\n",sum);
    return 0;
}
