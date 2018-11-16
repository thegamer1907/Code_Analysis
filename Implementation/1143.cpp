#include <iostream>
#include <cstring>
using namespace std;

int main(){
  int n,t;
  cin >> n >> t;
  char queue[60];
  cin >> queue;
  for(int k=0; k<t; k++){
    for(int i=0; i<n-1; i++){
      if(queue[i] == 'B' && queue[i+1] == 'G'){
        char aux = queue[i+1];
        queue[i+1] = queue[i];
        queue[i] = aux;
        i++;
      }
    }
  }
  cout << queue;
  return 0;
}
