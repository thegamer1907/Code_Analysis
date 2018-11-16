#include <queue>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[]) {
  int n;
  cin>>n;
  int a[n];
  int count=0;
  for(int i =1 ; i<= n ; i++ ){

    cin>>a[i];
    if(a[i]==1)count++;
  }
  int count1=0;
  for(int i =1 ; i<= n ; i++){
    for(int j =1  ; j<=n ; j++){
      for(int k = i ; k<=j ; k++){
        a[k]=1-a[k];
      }
      int c1=0;
      for(int p =0 ; p<= n ; p++){
         if(a[p]==1)
             c1++;
      }
      count1=max(count1,c1);
      for(int k = i ; k<=j ; k++){
        a[k]=1-a[k];
      }
    }
  }
  if(count==n)
  cout<<n-1<<endl;
  else
  cout<<count1<<endl;
  return 0;
}
