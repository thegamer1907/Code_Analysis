#include<bits/stdc++.h>
using namespace std;
int digsum(int x){
  int sum=0;
  while(x){
    sum+= x%10;
    x/=10;
  }
  return sum;
}
int main (){
  int n,cnt=0;
  cin>>n;
  for(int i=1;i<=20000000;i++){
    if(digsum(i)==10)cnt++;
    if(cnt==n){
      cout<<i<<endl;
      break;
    }
  }
  return 0;

}
