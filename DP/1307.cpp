#include<bits/stdc++.h>
using namespace std;
int n;
int numbers[111];
int prefix[111];
int dp[111][111];
int compute(int i,int j){
    if(i==j)return (numbers[i]==0);
    if(i>j)return 0;
    if(dp[i][j])return dp[i][j];
    int a=compute(i+1,j-1)+(numbers[i]==0)+(numbers[j]==0);
    //int b=compute(i+1,j)+(numbers[i]==0);
    //int c=compute(i,j-1)+(numbers[j]==0);
   // cout<<i<<" "<<j<<" "<<
    return dp[i][j]=a;
}
int main(){

    cin>>n;
    for(int i=1;i<=n;i++){
            cin>>numbers[i];
            prefix[i]=prefix[i-1]+numbers[i];
    }
    int a=0;
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            int b=prefix[i-1];
            int c=prefix[n]-prefix[j];
            //cout<<i<<" "<<j<<" "<<b<<" "<<c<<endl;
            a=max(a,b+c+compute(i,j));
        }
    }
    cout<<a;

}
