#include <bits/stdc++.h>
#define mk make_pair
#define fs first
#define sc second
using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
  int m, s, h, t1, t2;
  while(cin>>h>>m>>s>>t1>>t2){
    int mx=max(t1, t2);
    int mn=min(t1, t2);
    mx=mx*5;
    mn=mn*5;
    h=h*5;
    bool l=1;
    for(int i=mn; i<mx; ++i){
      if(i==h||i==s||i==m)
        l=0;
    }
    if(l){
      cout<<"YES"<<endl;
      continue;
    }
    l=1;
    for(int i=mx; i<=60; ++i){
      if(i==h||i==s||i==m)
        l=0;
    }
    for(int i=0; i<mn; ++i){
      if(i==h||i==s||i==m)
        l=0;
    }
    if(l){
      cout<<"YES"<<endl;
      continue;
    }
    cout<<"NO"<<endl;
  }
  return 0;
}


