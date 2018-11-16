#include <bits/stdc++.h>
using namespace std;
int main() {
  int n,y,k=0,max=-1,min=0,z=0;
  cin >> n;
  vector < int > v(n);
  for (int i=0;i<n;i++){
    cin >> v[i];
    if(v[i]==1)
      z++;
  }
  if(n==1){
    if(v[0]==1){
      cout << 0;
      return 0;
    }
    else{
      cout << 1;
      return 0;
    }
  }
  for (int i=0;i<n;i++){
    if(v[i]==0)
      k++;
    else
      k--;  
    if(max<k-min)
      max=k-min; 
    if(k<min)
      min=k;
  }
  
  cout << max+z;
  return 0;
}

