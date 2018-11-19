#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll c[2][2];

int main()
{
	ll n, i;
	string pass, word;
	
	cin>>pass;
	cin>>n;
	
	for(i = 0; i < n; i++)
	{
		cin>>word;
		
		if(word == pass)
		{
			cout<<"YES"<<endl;
			return 0;
		}
		
		if(word[0] == pass[0])
			c[0][0]++;
		
		if(word[0] == pass[1])
			c[0][1]++;
		
		if(word[1] == pass[0])
			c[1][0]++;
		
		if(word[1] == pass[1])
			c[1][1]++;
		
		
		if((c[0][0] || c[1][0]) && (c[0][1] || c[1][1]))
		if(c[0][0] && c[1][0] || c[0][1] && c[1][1] || c[0][1] && c[1][0])
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	
	cout<<"NO"<<endl;
	
	return 0;
}
