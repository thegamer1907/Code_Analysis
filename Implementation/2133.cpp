#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main ()
{
ios_base::sync_with_stdio(false) ;
cin.tie(NULL) ;
  int n ;
  cin >> n ;
  int suma=0 ;
   int sumb=0 ;
    int sumc=0 ;
  for (int i=1;i<=n;i++)
  {
      int a ;
      cin >> a ;
      suma=suma+a ;
       int b ;
      cin >> b ;
      sumb=sumb+b ;
       int c ;
      cin >> c ;
      sumc=sumc+c ;

  }
  if (suma==0 & sumb==0 & sumc==0)
  {
      cout << "YES" ;

  }
  else{
    cout << "NO" ;
  }
}
