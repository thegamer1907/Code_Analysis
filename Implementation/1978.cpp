#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,sum1 = 0,sum2 = 0,sum3 = 0;
  cin>>n;
  int x[n],y[n],z[n];
  for(int i = 0;i<n;++i){
    cin>>x[i]>>y[i]>>z[i];
    sum1 = sum1+x[i];
    sum2 = sum2+y[i];
    sum3 = sum3+z[i];
  }
  if(sum1 == 0 && sum2 == 0 && sum3 == 0){
    cout<<"YES";

  }
  else{
   cout<<"NO";
  }
}
