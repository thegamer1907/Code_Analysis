#include<iostream>
using namespace std;

int main(){

  char c[100];
  int n;
  cin>>n;
  int count=0;
  for(int i=0;i<n;i++){
     cin>>c[i];
    if(i!=0&&c[i]==c[i-1]){
        count++;
    }
  }
  cout<<count;
  return 0;
}
