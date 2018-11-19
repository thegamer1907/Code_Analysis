#include<bits/stdc++.h>
using namespace std;

int main()
{
	string pass;
	cin>>pass;
	int n;
	cin>>n;	
	string word;
	int islast=0,isfirst=0;	
	for(int i=0;i<n;i++)
	{
		cin>>word;
		if(word==pass || (word[0]==pass[1] && word[1]==pass[0]))
			{			
			cout<<"YES"<<endl;
			return 0;
			}
		if(word[0]==pass[1])
			islast=1;
		else if(word[1]==pass[0])
			isfirst=1;
				
	}
	if(isfirst && islast)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;	
}
