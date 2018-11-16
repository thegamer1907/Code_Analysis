#include<bits/stdc++.h>
using namespace std;
int main(){
int n,a,b;cin>>n>>a>>b;--a,--b;
for (int i=0;(1<<i)<=n;++i){
  a>>=1,b>>=1;
  if (a==b){
    if ((1<<i)==n/2) cout<<"Final!"<<endl;
    else cout<<i+1<<endl;
    return 0;
    }
  }
}