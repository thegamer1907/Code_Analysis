#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=0,n=0;
	cin>>n>>t;
	string h="";
	cin>>h;
	
	for(int i=0;i<t;i++)
	{
		
		
		for(int j=0;j<h.size();j++)
		{
			
			if(h[j]=='B'&&h[j+1]=='G')
			{
				h[j]='G';
				h[j+1]='B';
				j++;
			}
			
			
		}
		
	}
	cout<<h;
	
	
}