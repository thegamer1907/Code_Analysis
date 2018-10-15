#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int n;
  cin>>n;
  int *a = new int[n];
  for(int i = 0; i < n; i++)
  cin>>a[i];
  sort(a,a+n);
  int retval = n;
  int j=n/2;
  for(int i = 0; i < n/2; i++){
    while(true) {
      if(a[i]*2<=a[j]) {
        retval--;
        j++;
        break;
      }
      else
        j++;
      if(j==n)
      break;
    }
    if(j==n)
    break;
  }
  cout<<retval<<endl;
}
