#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[101];
  int n,k,mx,cnt=0;
cin >> n >> k;
 for (int i = 0; i < n; ++i)
  {
    cin >> arr[i];
    if(i+1==k)
      mx= arr[i];
  }
  for (int i = 0; i < n; ++i)
  {
    if (arr[i]>=mx && arr[i] > 0)
      cnt++;
  }
  cout<<cnt;
}
