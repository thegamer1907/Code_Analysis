#include<bits/stdc++.h>
using namespace std ;

int main()
{
  int n,m,i,y=0,z=0,sum=0;
  cin>>n>>m;
  int a[n+2];
  for(i=0;i<n;i++)
  {
      cin>>a[i];
  }
  z=* max_element(a,a+n);
  y=z+m;
  //y=* min_element(a,a+n);
  for(i=0;i<n;i++)
  {
      sum=sum+(z-a[i]);
  }
  if(sum>=m)
  {
      z=z;
  }
  else if(sum<m)
  {
    if((m-sum)%n!=0)
    {
        z=z+((m-sum)/n)+1;
    }
    else
        {
         z=z+((m-sum)/n);
        }
  }


  cout<<z<<"\t"<<y;
}
