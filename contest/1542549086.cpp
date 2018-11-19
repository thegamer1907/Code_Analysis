#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
  int barks;
  string password;
  cin>>password>>barks;
  vector<string> bark(barks);

  bool unlocked=false;
  for(int i=0;i<bark.size();i++){
    cin>>bark[i];
    if(bark[i]==password)
      unlocked=true;
  }

  for(int i=0;i<bark.size();i++)
    for(int j=0;j<bark.size();j++)
      if((bark[i]+bark[j]).substr(1,2)==password)
        unlocked=true;
  cout<<(unlocked?"YES":"NO")<<'\n';
}
