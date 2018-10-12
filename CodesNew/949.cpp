#include <iostream>
#include<string>
#include<set>
#define ss set<string>
using namespace std;

int main() {
	ss r;
	
	int n,m,i,g;
	cin>>n>>m;
	g=0;
	for(i=0;i<n;i++)
	{
	    string s;
		cin>>s;
		r.insert(s);
	}
	for(i=0;i<m;i++)
	{
	    string s;
		cin>>s;
		if(r.find(s)!=r.end())
		  g++;
		
		
	}
	
	if(g%2)
	{
	    n++;
	    
	}
	
	if(n>m)
	    cout<<"YES";
	else
	cout<<"NO";
	
	
	
	
	// your code goes here
	return 0;
}