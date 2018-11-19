#include <iostream>
#include <set>

using namespace std;

int main(){
  int problems,teams;
  cin>>problems>>teams;
  set<int> patterns;
  for(int i=0;i<problems;i++){
    int pattern=0;
    for(int j=0;j<teams;j++){
      int a;
      cin>>a;
      pattern=2*pattern+a;
    }
    patterns.insert(pattern);
  }

  bool possible=false;
  for(int a:patterns)
    for(int b:patterns)
      if((a&b)==0)
        possible=true;
  if(possible)
    cout<<"Yes\n";
  else
    cout<<"No\n";
}
