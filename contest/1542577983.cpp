#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define N 100000
#define K 4
vector<int> t[N];



set<vector<int> > acc;
set<vector<int> > seen;

int main()
{
  int n,k;cin>>n>>k;
  for(int i=0;i<n;i++)
    {
      for(int j=0;j<k;j++)
	{
	  int a;scanf("%d",&a);
	  t[i].push_back((a==0)?1:-1);
	}
    }
  //try bounded dp
  acc.insert(vector<int>(k,0));
  for(int i=0;i<n;i++)
    {
      if(seen.find(t[i])!=seen.end())continue;
      seen.insert(t[i]);
      vector<vector<int> > temp;
      for(auto v : acc)
	{
	  auto w = v;
	  bool sol=true;
	  for(int j=0;j<k;j++)
	    {
	      w[j]+=t[i][j];
	      if(w[j]<0)sol=false;
	    }
	  if(sol)
	    {
	      printf("YES\n");
	      return 0;
	    }
	  if(acc.find(w)==acc.end())temp.push_back(w);
	}
      for(auto v : temp)acc.insert(v);
    }
  printf("NO\n");
  
  return 0;
}
