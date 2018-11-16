#include<bits/stdc++.h>
using namespace std;

#define inputFile freopen("/home/asif/Code/input/1","r",stdin);
#define outputFile freopen("/home/asif/Code/input/1","w",stdout);
#define be(x) x.begin(),x.end()

int main(){
  string x; cin>>x;
  if(x.size()==1){cout<<"NO\n"; return 0;}
  int ab=0,ba=0;
  for(int i=0;i<x.size()-2;i++){
    if(x.at(i)=='A'&&x.at(i+1)=='B'){
      for(int j=i+2;j<x.size()-1;j++){
        if(x.at(j)=='B'&&x.at(j+1)=='A'){cout<<"YES\n"; return 0;}
      }
    }
    if(x.at(i)=='B'&&x.at(i+1)=='A'){
      for(int j=i+2;j<x.size()-1;j++){
        if(x.at(j)=='A'&&x.at(j+1)=='B'){cout<<"YES\n"; return 0;}
      }
    }
  }
  cout<<"NO\n";
  return 0;
}
