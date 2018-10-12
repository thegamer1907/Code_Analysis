#include<bits/stdc++.h>
#define lli long long int
#define ld long double 
#define pb push_back
#define MAX 1e18
#define mod 10000000007
#define PI 3.14159265358979323846264338327
#define eps 1e-6
using namespace std;




int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   
  	lli  n,m,i,mn,mx,x,mx2=0;
  	
  	priority_queue<lli,vector<lli>,greater<lli> >pq;
  	
  	cin>>n>>m;
  	
  	for(i=0;i<n;i++)
  	{
  		cin>>x;
  		mx2=max(mx2,x);
  		pq.push(x);
  		
	  }
	  
	  for(i=0;i<m;i++)
	  {
	  	x=pq.top();
	  	pq.pop();
	  	
	  	x=x+1;
	  	pq.push(x);
	  	
	  	//cout<<x<<endl;
	  }
	  
	  mn=MAX;
	  mx=0;
	  
	  while(!pq.empty())
	  {
	  	x=pq.top();
	  	pq.pop();
	  	
	  	
	  	mx=max(x,mx);
	  }
	  
	  
	  cout<<mx<<" "<<mx2+m;
  	
}
