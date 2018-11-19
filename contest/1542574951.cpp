#include "bits/stdc++.h"
                                                                           
 #define rep(i,n) for(int i=0;i<n;i++)
 #define ff                 first
#define ss                 second
#define tr(container, it)  for(__typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define mem(n,m)           memset(n,m,sizeof(n))
using namespace std;

int a[100005][5] ;


int main()
{
  int n,k,cnt,sum=0,ans[5]={0},r=0,l=0;
  cin >> n >> k ;
  set<int> s ;
  set<pair<int,int> > ss ;
  for(int i=0;i<n;i++)
  {
  	cnt = 0 ;
  	for(int j=0;j<k;j++)
  	{
  		cin >> a[i][j] ;
  		if(a[i][j]==0)
  		s.insert(j) ;
  		if(k==1 and a[i][j]==0)
  		{
  			cout << "YES" ;
  			return 0 ;
		  }
		  if(a[i][j]==0)cnt++,ans[j]++;
	  }
	  if(cnt>1)
	  {
	  	sum = 1 ;
	  	if(cnt>=3)r=1;
	  	if(cnt==2)
	  	{
	  		int f=-1,s=-1;
	  		rep(j,k){
	  		if(a[i][j]==0 and f==-1)
	  		{
	  			f=j;
			  }
			  else if(a[i][j]==0)s=j;
		     }
			//  cout<<f+1<<" "<<s+1<<endl;
			  ss.insert({f+1,s+1});
			  
		  }
	  }
	  	
	  
	  
  }
  if(k==1)
  {
  	cout << "NO" ;
  	return 0 ;
  }
  if(k==2)
   {
   	 if(s.size()==2)
   	 {
   	 	cout << "YES" ;
		}
		else cout << "NO" ;
		return 0 ;
   }
   if(k==3)
   {
   	  if(sum==1 and s.size()==3)
   	  {
   	  	cout << "YES" ;
		 }
		 else cout << "NO" ;
		 return 0 ;
	}
	 if(k==4)
	 {
	 	//cout<<ss.size()<<"\n";+
	 	 if(s.size()==4)
	 	 {
	 	 	if(r)
	 	 	{
	 	 		cout << "YES" ;
			  }
			  else if(ss.size()>1)
			  {
			  	//cout << (ss.find({1,2})!=ss.end()) ;
			  	  if(ss.find({1,2})!=ss.end() and ss.find({3,4})!=ss.end())r=1;
			  	  else if(ss.find({1,3})!=ss.end() and ss.find({2,4})!=ss.end())r=1;
			  	  else if(ss.find({1,4})!=ss.end() and ss.find({2,3})!=ss.end())r=1;

				   if(r)cout<<"YES";
				   else cout <<"NO" ;
				   return 0;
			  }
			  else
			  {
			  	cout << "NO" ;
			  }
		  }
		  else
		  {
		  	cout << "NO" ;
		  }
		  return 0 ;
	 }
	return 0;
}
