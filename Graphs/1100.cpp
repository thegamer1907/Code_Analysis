#include <iostream>
using namespace std;
int main(){
  int n,t;
  cin >>n>>t;
  int a[n];
  for(int i=0;i<n-1;i++)    cin >>a[i];
  bool lol=false;
  for(int i=0;i<n-1;){
    i=i+a[i];
    if(t-1==i){
        lol=true;
        break;
      }
  }
  if(lol) cout <<"YES"<<endl;
  else cout <<"NO"<<endl;
  return 0;
}