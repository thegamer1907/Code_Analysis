#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	string s;
	cin>>s;
	
	int n;
	cin>>n;
	
	string in[n];
	
	int f1,g1,f2,g2;
	
	 f1=f2=g1=g2=0;
	
	for(int i=0;i<n;i++)
	cin>>in[i];
	
	
	
	
	
		for(int i=0;i<n;i++)
	{
		if(s[0]==in[i][0] && s[1]==in[i][1])
		{
		f1=1;
		f2=1;
		
	}
		
		if(s[1]==in[i][0])
		g1=1;
		
		if(s[0]==in[i][1])
		g2=1;
		
	}
	

	if((f1 && f2) || (g1 && g2))
	cout<<"YES"<<endl;
	
	else
	cout<<"NO"<<endl;	
	
	
	return 0;
}