#include <iostream>
using namespace std;

int a[300001], am[300001];

int main(){
  int n, i, k;
  cin >> n >> k;
  for(i = 0; i < n; i++){
    cin >> a[i];
  }
  int l = 0, cost = 0, tot = 0, now = 0, ll = -1, rr = -1;
  for(i = 0; i < n; i++){
    if(a[i] == 0){
      cost++;
      while(cost > k){
        if(a[l] == 0){
          cost--;
        }
        l++;
      }
    }
    if(i-l+1 > tot){
      ll = l;
      rr = i;
      tot = max(i-l+1, now);
    }
  }
  if(rr >= 0 && ll >= 0){
    cout << rr-ll+1 << endl;
    for(i = ll; i <= rr; i++){
      a[i] = 1;
    }
  }
  else{
    cout << 0 << endl;
  }
  for(i = 0; i < n; i++){
    cout << a[i] << " ";
  }
  cout << endl;
}
