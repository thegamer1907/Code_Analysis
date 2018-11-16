#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int k=n;
  int x,a=0,z=0,m=0;
  while(n--){
    cin>>x;
    if(x==1){
        a++;
        z--;
        if(z<0)z=0;}
     else if(x==0){
        z++;
     }
     if(z>m)m=z;
  }
  //cout<<a<<endl;
  if(a==k){
    cout<<a-1<<endl;
  }
  else{
    cout<<a+m<<endl;
  }

}
