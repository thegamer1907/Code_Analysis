#include <iostream>
using namespace std;

int main()
{
  int n,a[100002],m,q,i,high,low,mid;
  cin>>n;
  for (i=1;i<=n;i++){
    cin>>a[i];
    if (i!=0)
      a[i]+=a[i-1];
  }
  cin>>m;
  for (i=0;i<m;i++){
    cin>>q;
    low=0;
    high=n;
    while (high-low>1){
      mid=(high+low)/2;
      if (a[mid]>=q)
	high=mid;
      else
	low=mid;
    }
    cout<<low+1<<endl;
  }
  return 0;
}
