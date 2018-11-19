#include <iostream>
#include <vector>
#include <queue>
#include <string.h>
#include <string>
#include <math.h>
#include <algorithm>
using namespace std;


int main(){
  int n,k;
  cin>>n>>k;
  int a; int b;int c;int d;
  a=1;b=1;c=1;d=1;
  int t=1;
  vector< vector<int> > vec;
  for(int i=0;i<n;i++){
    if(k==1){
      int a1;
      cin>>a1;
      a=a*a1; if(a==0) {cout<<"YES";return 0;}
    }
    else if(k==2){
      int a1,b1;
      cin>>a1>>b1;
      a=a*a1;
      b=b*b1;
      if(a==0 && b==0) {cout<<"YES";return 0;}
    }
    else if(k==3){
      vector<int> v;
      int a1,b1,c1;
      cin>>a1>>b1>>c1;
      bool flag=false;
      for(auto u : vec){
        if(a1==u[0] && b1==u[1] && c1==u[2]){
          flag=true;
        }
      }
      // cout<<a<<endl;
      if(!flag || i==0){
        v.push_back(a1);
        v.push_back(b1);
        v.push_back(c1);
        vec.push_back(v);
      }
      // cout<<t<<endl;
      for(auto u : vec){
        for(auto t : vec){
          int q,w,e;
          q=u[0]*t[0];w=u[1]*t[1];e=u[2]*t[2];
          if(q==0 && w==0 && e==0) {cout<<"YES";return 0;}
        }
      }
    }
    else if(k==4){
      // vector< vector<int> > vec;
      vector<int> v;
      int a1,b1,c1,d1;
      cin>>a1>>b1>>c1>>d1;
      bool flag=false;
      for(auto u : vec){
        if(a1==u[0] && b1==u[1] && c1==u[2] && d1==u[3]){
          flag=true;
        }
      }
      // cout<<a<<endl;
      if(!flag || i==0){

        v.push_back(a1);
        v.push_back(b1);
        v.push_back(c1);
        v.push_back(d1);
        vec.push_back(v);
      }
      // cout<<t<<endl;
      for(auto u : vec){
        for(auto t : vec){
          int q,w,e,r;
          q=u[0]*t[0];w=u[1]*t[1];e=u[2]*t[2];r=u[3]*t[3];
          if(q==0 && w==0 && e==0 && r==0) {cout<<"YES";return 0;}
        }
      }
    }
  }

  cout<<"NO"; return 0;

}
