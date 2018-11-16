#include <iostream>

using namespace std;

int main(){
  int rounds;
  while(cin>>rounds){
    int mishka=0,chris=0;
    for(int r=0;r<rounds;r++){
      int md,cd;
      cin>>md>>cd;
      if(md>cd)
        mishka++;
      else if(cd>md)
        chris++;
    }
    if(mishka>chris)
      cout<<"Mishka\n";
    else if(chris>mishka)
      cout<<"Chris\n";
    else
      cout<<"Friendship is magic!^^\n";
  }
}
