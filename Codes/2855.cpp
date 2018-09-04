#include <bits/stdc++.h>
using namespace std;

string be;
int z[1000003];
int l,r;
//int l[1000003];
//int r[1000003];

int maxim,maxh;
int main() {
  cin>>be;
  z[0]=0;
  l=-1;
  r=-1;
  for (int i=1; i<be.size(); i++) {
    if (i>r) {
      l=i;
      r=i-1;
      while (r+1<be.size() && be[r+1-i]==be[r+1]) r++;
      z[i]=r-l+1;
    }
    else {
      if (z[i-l]>=r-i+1) {
        l=i;
        while (r+1<be.size() && be[r+1-i]==be[r+1]) r++;
        z[i]=r-l+1;
      }
      else z[i]=z[i-l];
    }
    if (z[i]>maxim) {
      if (i+z[i]<be.size()) {
        maxim=z[i];
        maxh=i;
      }
      else {
        if (z[i]-1>maxim) {
          maxim=z[i]-1;
          maxh=i;
        }
      }
    }
  }
  int tart=be.size()-1;
  while (tart>0 && (z[be.size()-tart]!=tart || tart>maxim)) {
    tart--;
  }
  if (tart>0)  {
    for (int i=0; i<tart; i++) cout<<be[i];
  }
  else cout<<"Just a legend"<<endl;
  
  
  return 0;
}
