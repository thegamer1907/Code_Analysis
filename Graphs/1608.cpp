#include <iostream>
using namespace std;

int n,k,p,a[30010];

int main(){
  cin>>n>>k;
  k--,n--;
  for(int i=0;i<n;i++)
    cin>>a[i];
  while(p<k)
    p+=a[p];
  cout<<(p==k?"YES":"NO")<<endl;
  return 0;
}