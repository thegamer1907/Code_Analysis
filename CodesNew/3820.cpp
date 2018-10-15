#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  long long int arr[n];
  long long int max =0;
  long long int sum =0;
  for(int i= 0;i < n;i++){
    scanf("%lld",&arr[i]);
    if(max < arr[i]){
      max = arr[i];
    }
    sum = sum + arr[i];
}
  long long int x =ceil(((double)sum/(double)(n-1)));
  //  cout<<x<<endl;
  //  cout<<max<<endl;
  while(x < max){
    x++;
  }
  cout<<x<<endl;

}
