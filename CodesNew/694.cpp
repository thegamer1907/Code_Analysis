#include<bits/stdc++.h>
using namespace std;

int main()
{
  
  int n, m, k, both=0;
  cin >> n >> m;
  
  k = m+n;
  
  vector <string> a(k);
  
  for(int i=0; i<k; i++)
    cin >> a[i];
  
  sort( a.begin(), a.end());
  
  for(int i=0; i<k-1; i++)
    if(a[i]==a[i+1])
      both++;
  
  n = n - (int)both/2 ;
  m = m + (int)both/2 - both;
  
  if( m>=n ) cout << "NO";
  else cout << "YES";
  
  return 0;
}