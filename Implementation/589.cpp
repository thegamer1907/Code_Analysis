#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
  int n,k,i;
  cin>>n>>k;
  int A[n];
  for(i=0;i<n;i++)
    cin>>A[i];
    int z=0;
  for(i=0;i<n;i++)
  {
      if(A[i]>0 && A[i]>=A[k-1])
        z++;
  }
  cout<<z;

    return 0;
}
