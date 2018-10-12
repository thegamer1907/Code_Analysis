#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,m,k,men=99999,may=-99999,x,res;
  vector<int>arr;
  cin>>n>>m;
  for(int i=0;i<n;i++)
  {
    cin>>k;
    arr.push_back(k);
    if(k<men)
    men=k;
    if(k>may)
    may=k;
  }
  res=m+may;
  sort(arr.begin(),arr.end());
  while(m>0)
  {
    if(may==arr[0])
    may++;
    for(int i=0;i<n;i++)
    {
      if(arr[i]<may)
      {
        x=may-arr[i];
        arr[i]+=x;
        m-=x;
      }
    }
  }
  sort(arr.begin(),arr.end());
  cout<<arr[n-1]<<" "<<res<<endl;
}
