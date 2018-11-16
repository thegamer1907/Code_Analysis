#include<iostream>
#include<algorithm>
using namespace std;
int n,num[101];
int main(){
  cin>>n;
  for(int i = 0; i < n; ++i)
    cin>>num[i];

  int sol = 0;
  for(int i = 0; i < n; ++i){
    for(int j = i; j < n; ++j){
      int cnt = 0;
      for(int k = 0; k < n; ++k){
        if( i<=k&&k<=j )
          cnt+=num[k]?0:1;
        else
          cnt+=num[k];
      }
      sol=max(sol,cnt);
    }
  }
  cout<<sol<<endl;
  return 0;
}
