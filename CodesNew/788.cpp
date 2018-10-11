#include <iostream>
#include<map>
using namespace std;

int main() {
	
	string p[10001],e[10001];
	map< string , int> mp2;
	int n,m,i,match=0,notmatch=0,poll,enemy;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	     cin>>p[i];

	for(i=1;i<=m;i++)
	 {
	     cin>>e[i];
	     mp2[e[i]]=1;
	 }
	 
	 for(i=1;i<=n;i++)
	 {
	     if(mp2[p[i]] == 1)
	       match++;
	     else
	       notmatch++;
	 }
	 
	 poll = (match+1)/2 + notmatch;
	 enemy = m - (match+1)/2;

	 if(poll>enemy)
	  cout<<"YES"<<endl;
	  else
	  cout<<"NO"<<endl;
	  
	return 0;
}