#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int n, k;
  cin >> n >> k;
  int a[n];

  for (int i=0; i<n; i++){
    cin >> a[i];
  }
  if (a[k-1] > 0){
    int ex=count(a+k, a+n, a[k-1]);
    cout << k+ex;
  } else {
    int ex=count(a, a+k, 0);
    cout << k-ex;
  }
  return 0;
}
