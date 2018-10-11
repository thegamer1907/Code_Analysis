#include <iostream>

using namespace std;
int v[100000];
int main()
{
  int i,j=0,sc=0,t,n,lmax=0;
  cin>>n>>t;
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  for(i=0;i<n;i++){
    sc+=v[i];
    while(j<=i&&sc>t){
        sc-=v[j];
        j++;
    }
    if(i-j+1>lmax){
        lmax=i-j+1;
    }
  }
  cout<<lmax;
  return 0;
}
