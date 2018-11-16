#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin>>n;
  int arr[n][3];
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<3;j++)
    {
      cin>>arr[i][j];
    }
  }
  int xs=0,ys=0,zs=0;
  for(int i=0;i<n;i++)
  {
    xs+=arr[i][0];
    ys+=arr[i][1];
    zs+=arr[i][2];
  }
  if(xs==0 && ys==0 && zs==0)
  {
    cout<<"YES";
  }
  else
  {
    cout<<"NO";
  }
}
