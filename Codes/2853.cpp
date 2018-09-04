#include <bits/stdc++.h>
using namespace std;

int z[1000001];

string s;

int eddigmax[1000001];

int main() {
  cin>>s;
  z[0] = s.size();
  int l=0,r=0;
  int aktmax = 0;
  for(int i=1; i<s.size(); i++){
    if(i > r){
      if(s[i] != s[0]){
        z[i] = 0;
      }
      else{
        l=i;
        r = i;

        while(r+1 < s.size() && s[r+1-l] == s[r+1]) r++;
        z[i] = r - l + 1;
      }
    }
    else{
      z[i] = min(z[i - l], r-i+1);
      if(z[i-l] >= r-i+1) {
        l = i;
        while(r+1 < s.size() && s[r+1-l] == s[r+1]) r++;
        z[i] = r - l + 1;
      }
    }
    //cout << z[i] << " ";
    eddigmax[i] = max(z[i], eddigmax[i-1]);
  }
  
  int valasz = 0;
  
  for(int i=s.size()-1; i>=2; i--){
    if(z[i]+i == s.size() && eddigmax[i-1] >= z[i]) valasz = s.size()-i;
  }
  
  if(valasz == 0) cout<<"Just a legend";
  else cout<<s.substr(0,valasz);
  
  
  
  return 0;
}
