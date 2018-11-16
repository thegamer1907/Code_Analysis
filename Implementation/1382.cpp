#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,t,i;
	cin>>n>>t;
	string s;
	cin>>s;
	while(t--)
	{	
		for(i=0;i<n-1;i++)
		{	
			if(s[i]=='B' && s[i+1]=='G')
			{	//cout<<"Before:"<<s<<endl;
				swap(s[i],s[i+1]);
				i++;
				//cout<<"After:"<<s<<endl;
			}
			
		}
		
	}
	
	cout<<s<<endl;
	return 0;
}