#include <bits/stdc++.h>
const int maxn=1e5+10;
using namespace std;

int vis[maxn];
int main(){
  ios::sync_with_stdio(false);
  int N,K;
  cin>>N>>K;
  for(int i=1;i<=N;i++){
    int tmp=0;
    for(int j=1;j<=K;j++){
      int x;cin>>x;
      tmp<<=1;tmp|=x;
    }
    vis[tmp]=1;
  }
  for(int i=0;i<(1<<K);i++){
    for(int j=0;j<(1<<K);j++){
      if(vis[i]&&vis[j]&&!(i&j)){
        cout<<"YES"<<endl;
        return 0;
      }
    }
  }
  cout<<"NO"<<endl;
  
}
