//In the name of God

#include <bits/stdc++.h>
using namespace std;
#define lol long long
int a[110],b[110];

int main()
{
  ios::sync_with_stdio(false);
  int n,k;
  cin>>n>>k;
  for(int i=0;i<n;i++)
    cin>>a[i];
  for(int i=0;i<k;i++)
    cin>>b[i];
  if(k>1)
    cout<<"Yes"<<endl;
  else
    {
      for(int i=0;i<n;i++)
	if(a[i]==0)
	  a[i]=b[0];
      bool is=true;
      for(int i=1;i<n;i++)
	if(a[i]<a[i-1])
	  is=false;
      if(is)
	cout<<"No"<<endl;
      else
	cout<<"Yes"<<endl;
    }
  return 0;
}
