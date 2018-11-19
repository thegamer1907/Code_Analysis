#include <bits/stdc++.h>

using namespace std;

string d;

int n;

bool fifi, sese, fise, sefi;

int main(){
  cin >> d;
  cin >> n;
  for(int i = 1; i <= n; i++){
    string x;
    cin >> x;
    if(x == d){
      cout << "YES";
      return 0;
    }
    if(x[0] == d[0])
      fifi = true;
    if(x[0] == d[1])
      fise = true;
    if(x[1] == d[1])
      sese = true;
    if(x[1] == d[0])
      sefi = true;
  }
  if(fise == true && sefi == true){
    cout << "YES";
    return 0;
  }
  if(sefi == true && fise == true){
    cout << "YES";
    return 0;
  }
  cout << "NO";
}
