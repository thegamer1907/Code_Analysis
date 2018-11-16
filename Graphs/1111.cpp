#include <iostream>
using namespace std;
int main(){
  int n,t;
  cin >>n>>t;
  int a[n];
  for(int i=0;i<n-1;i++){
    cin >>a[i];
  }int c=0;
  for(int i=0;i<n-1;){i=i+a[i];
    if(t-1==i){cout <<"YES";return 0;}
  }
    cout <<"NO"<<endl;
  return 0;
}