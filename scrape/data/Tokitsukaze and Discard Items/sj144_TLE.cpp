#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,k,g,x,i,count=0,c=0;
	cin>>n>>m>>k;
	g=k;
	set<long long int>s;
	for(i=0;i<m;i++)
	{
		cin>>x;
		s.insert(x);
	}
	i=0;
	set<long long int>::iterator itr;
	itr=s.begin();
	if((*itr)<=k)
	count++;
	while(itr!=s.end())
	{
	  if((*itr)<=k)
	  {
	  	c++;
	  	itr++;
	  }
	  else if(c!=0)
	  {
	  	k=k+c;
	  	c=0;
	  	if((*itr)<=k)
	  	count++;
	  }
	  else
	  {
	  	k=k+g;
	  	c=0;
	  	if((*itr)<=k)
	  	count++;
	  }
	  //cout<<k<<" "<<count<<endl;
	}
	cout<<count<<endl;
}