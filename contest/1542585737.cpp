#include<bits/stdc++.h>
using namespace std;
#define L long long int
const int M=1e5+10;
int d[]={8,4,2,1},n,k,cnt[20];
int main()
{
  cin>>n>>k;
  for(int i=1;i<=n;i++)
    {
      int x=0;
      for(int j=0;j<k;j++)
	{
	  int b;
	  scanf("%d",&b);
	  if(b)
	    x+=d[j];
	}
      cnt[x]++;
    }
  for(int i=0;i<16;i++)
    for(int j=0;j<16;j++)
      if(cnt[i] && cnt[j] && (i&j)==0)
	return cout<<"YES"<<endl,0;
  cout<<"NO"<<endl;
  return 0;
}
