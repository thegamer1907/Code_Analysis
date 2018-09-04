#include <iostream>
#include <string>
#include <vector>

using namespace std;

const int none=-1;

int solve(const string& s,const vector<int>& next,char c,int changes);

int main(){
  int length,changes;
  string s;
  while(cin>>length>>changes>>s){
    int last_a=none,last_b=none;
    vector<int> next(length,none);
    for(int i=0;i<s.size();i++)
      if(s[i]=='a'){
        if(last_a!=none)
          next[last_a]=i;
        last_a=i;
      }else{
        if(last_b!=none)
          next[last_b]=i;
        last_b=i;
      }
    cout<<max(solve(s,next,'a',changes),solve(s,next,'b',changes))<<'\n';
  }
}

int solve(const string& s,const vector<int>& next,char c,int changes){
  int first=none;
  for(int i=0;i<s.size();i++)
    if(s[i]==c){
      first=i;
      break;
    }
  if(first==none)
    return s.size();
  int last=first;
  for(int i=0;i<changes;i++){
    last=next[last];
    if(last==none)
      return s.size();
  }
  int best=last;
  while(next[last]!=none){
    last=next[last];
    best=max(best,last-first-1);
    first=next[first];
  }
  best=max(best,static_cast<int>(s.size())-first-1);
  return best;
}
