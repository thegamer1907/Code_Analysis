#include <bits/stdc++.h>
using namespace std;
#define N 1000009
int z[N];
string temp;
void z_algo(){
  int i,j,l=0,r=0,k;
  int n=temp.length();
  for(i=1; i<temp.length(); i++){
    if(i>r){
      l=r=i;
      while(r<n && temp[r]==temp[r-l]){
        r++;
      }
      z[i]=r-l;
      r--;
    }
    else{
      k=i-l;
      if(z[k]<r-i+1){
        z[i]=z[k];
      }
      else{
        l=i;
        while(r<n && temp[r-l]==temp[r]){
          r++;
        }
        z[i]=r-l;
        r--;
      }
    }
  }
}
void fun(){
  int i;
  z_algo();
  bool f=false;
  int idx=-1,min=-1,n=temp.length();
  for(i=1; i<temp.length(); i++){
    if(z[i]==(n-i) && min>=z[i]){
      idx=i;
      f=true;
      break;
    }
    min=max(min,z[i]);
  }
//  cout << min << " ---  " << idx << endl;
  if(f==false){
    cout << "Just a legend";
  }
  else{
    for(i=idx; i<idx+z[idx]; i++){
      cout << temp[i];
    }
  }
}
int main(){
  cin >> temp;
  fun();
}
