#include <iostream>
using namespace std;
int main() {
  int n,k,mark,cnt=0;
  int a[50];

  cin>>n>>k;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if (i==(k-1))
      mark = a[i];
  }
  //cout<<"mark="<<mark<<"\n";
  
  for(int i=0;i<n;i++)
  {
    if ((a[i]>0)&&(a[i]>=mark))
      cnt++;
  }
  cout<<cnt;

  return 0;
}