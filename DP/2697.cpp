#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int dp[100005];
struct tree{
    int h,x,occupy;
}t[100005];
int main(){
    int n,i;
    while(cin>>n){
        memset(dp,0,sizeof(dp));
        for(i=0;i<n;i++){
             cin>>t[i].x>>t[i].h;
             t[i].occupy=t[i].x;
        } 
        dp[0]=1;
        if(n==1){
            cout<<1<<endl;
            continue;
        }
        if(n==2){
            cout<<2<<endl;
            continue;
        }
        for(i=1;i<n-1;i++){
            int th=t[i].h,tx=t[i].x,toc=t[i-1].occupy;
            int l=dp[i-1],r=dp[i-1];
            if((tx+th)<t[i+1].x){
                r++;
                t[i].occupy=tx+th;
            }
            if(tx-th>toc){
                l++;
                t[i].occupy=tx;
            }
            dp[i]=max(max(dp[i-1],l),r);
        }
        dp[n-1]=dp[n-2]+1;
        cout<<dp[n-1]<<endl;
    }
    return 0;
}
