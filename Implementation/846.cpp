#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,t;
  cin>>n>>t;
  string s;
  cin>>s;
  char a;
  vector<int>k;
  for(int i=0;i<t;i++)
    {
      for(int j=0;j<n-1;j++)
	{
	  if(s[j]=='B'&& s[j+1]=='G')
	    {
	      k.push_back(j);
	    }
	}
      for(int j=0;j<k.size();j++)
	{
	  a=s[k[j]];
	  s[k[j]]=s[k[j]+1];
	  s[k[j]+1]=a;
	}
      k.clear();
    }
  cout<<s<<endl;
  return 0;
}
  
