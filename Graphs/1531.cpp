#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
#define V 1000

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);   
  int n,t ;
  cin >> n >> t ;
  int i,j,temp,z=0,l=1 ;
  for(i=0;i<n-1;i++)
  {
  	cin >> temp ;
  	if(i+1==l)
  	{ l += temp ; }
  	if(l==t)
  	{ z=1 ; } 
  }	
  if(z==1)
  { cout << "YES" ; }
  else 
  { cout << "NO" ; }
  return 0 ;	
} 