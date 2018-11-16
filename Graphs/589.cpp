#include<iostream>
using namespace std;
void swap(char &a, char &b)
{
  char t;
  t=a;
  a=b;
  b=t;
  return ;
}

int main()
{
  int n, t,i;
  cin>>n>>t;
  char a[n];
  for( i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(i=1;i<=t;i++)
  { for(int j=0;j<n-1;j++)
    {
    if(a[j]=='B' && a[j+1]=='G')
    {
      swap(a[j],a[j+1]);
      j+=1;
    }
  }
  
 }
for(i=0;i<n;i++)
{
  cout<<a[i];
}
return 0;
}
