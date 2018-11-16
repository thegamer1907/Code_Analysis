#include <iostream>
using namespace std;

int main(){
  string s;
  cin >> s;
  bool isZero = true;
  int count = 0;
  for(char x:s){
    if(x == '0'){
      if(isZero) count++;
      else{
        count = 1;
        isZero = true;
      }
    }else{
      if(!isZero) count++;
      else{
        count = 1;
        isZero = false;
      }
    }
    if(count == 7){
      cout << "YES" << endl;
      return 0;
    }
  }
  cout << "NO" << endl;
  return 0;
}
