#include <iostream>
using namespace std;

int main(){
  int cellcount;
  int destination;
  cin >> cellcount;
  cin >> destination;

  bool reachedDestination = false;
  int nextHop = 1;
  int temp;

  for (int i = 1; i < cellcount; i++) {
    cin >> temp;
    if(i == nextHop){
      nextHop = i + temp;
      if(nextHop == destination){
        reachedDestination = true;
        break;
      }else{
        nextHop = i + temp;
      }
    }
  }

  if(reachedDestination){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
}
