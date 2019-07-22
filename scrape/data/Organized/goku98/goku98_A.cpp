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
  int i=0,c=0,j = (a[0]/k);
  if(a[0]%k!=0)
   j++;
  int pr=i;
  while(i<m)
  { // cout<<j<<" ";
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
          int op=1;
          if((a[i]-pr)%k==0)
            op=0;
          j = ((a[i]-pr)/k);
          j=j+op;
      }

  }
  cout<<c;
   return 0;

}