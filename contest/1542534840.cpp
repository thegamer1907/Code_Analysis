#include <iostream>
#define N 100005
using namespace std;
int n,m,x;
int dp[16];
int main(){
  cin>>n>>m;
  for(int i=0;i<n;i++){
    int p=0;
    for(int j=0;j<m;j++){
      cin>>x;
      p=(p<<1)+x;
    }
    dp[p]++;
  }
  for(int i=0;i<16;i++){
    for(int j=i;j<16;j++){
      if(dp[i]&&dp[j]&&((i&j)==0)){
        cout<<"YES"<<endl;
        return 0;
      }
    }
  }
  cout<<"NO"<<endl;
  return 0;
}