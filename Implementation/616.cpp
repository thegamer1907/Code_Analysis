#include <bits/stdc++.h>
using namespace std;
int main() 
{
  int n,k,a[99],c=0,i,m;
  cin >> n >> k;
  for(i=0;i<n;i++)
    cin >> a[i]; 

  m = a[k-1];  
for(i=0;i<n;i++)
{
  if(a[i]>=m && a[i] > 0)
     c++;
}     
cout << c;
  return 0;
}
