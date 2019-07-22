#include <bits/stdc++.h>
using namespace std;
# define int long long

signed main ()
{

  int n,m,k;
  cin>>n>>m>>k;
  int a[m];
  for(int i=0;i<m;i++)
    cin>>a[i];

  //sort(a,a+m);
  int i=0,c=0,j = (a[0]/k)*k;
  j++;
  int pr=i;
  while(i<m)
  {  //cout<<i<<" ";
      while(a[i]<=j*k + pr)
      {
          i++;
          if(i==m)
          {
              c++;
              break;
          }
      }
      if(i==m)
        break;
      c++;
      //cout<<c<<" "<<i<<endl;
      if(a[i]<=j*k + i)
      {
          pr=i;
      }
      else
      {
          pr=i;
          j++;
      }
  }
  cout<<c;
   return 0;

}