#include<iostream>
#include<cmath>

using namespace std;

void change(char s[], int n, int t)
{
	for(int j=0;j<t;j++)
	{
		for(int i=0;i<n-1;i++)
		{
			if(s[i]=='B' && s[i+1]=='G')
			{
				swap(s[i],s[i+1]);
				i++;
			}
		}
	}

	for(int i=0;i<n;i++)
	{
		cout<<s[i];
	}
}

int main()
{
	int n,t;

	cin >> n >> t;
	char s[n];

	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}

	
	change(s,n,t);
	
}