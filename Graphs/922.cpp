#include<iostream>

using namespace std;

int main(){
  int n,t,idx;
  int flag = 1;
  cin >> n >> t;

  int arr1[n-1];
  for(int i=0;i<n-1;++i)
    cin >> arr1[i];

  int count =0;
  for(int i=0;i<n-1;i++){
    // cout << i+1;
    if(n==t && arr1[n-2]==1){
      cout << "YES";
      flag = 0;
      break;}
    if(i+1==t){
      cout<<"YES";
      flag = 0;
      break;
    }
  i = i+arr1[i]-1;
}
  if (flag)
    cout << "NO";
}
