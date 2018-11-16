#include<bits/stdc++.h>
using namespace std;
int main()
{
	
	string s;
	cin >> s;
	int n =s.size();
	int count=0;
	int i=0;
	while(i<n)
	{	
		if(s[i]=='0')
		{
			while(s[i]=='0')
			{
				count++;
				i++;
				if(count>=7)
				{
					cout << "YES";
					return 0;
				}
				
			}
			count=0;
			continue;
			
		}
		
			if(s[i]=='1')
		{
			while(s[i]=='1')
			{
				count++;
				i++;
				if(count>=7)
				{
					cout  <<"YES";
					return 0;
				}
				
			}
			count=0;
			continue;
		}
	}
	cout << "NO"<<endl;
}