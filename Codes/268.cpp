#include <iostream>
using namespace std;

int a[1000000];

int main(){
  int n, i, j, aux, aux1, pos = 0, m;
  cin >> n;
  for(i = 1; i <= n; i++){
    cin >> aux;
    aux1 = pos+aux;
    for(j = pos; j < aux1; j++){
      a[j] = i;
      pos++;
    }
  }
  cin >> m;
  while(m--){
    cin >> aux;
    cout << a[aux-1] << endl;
  }
}
