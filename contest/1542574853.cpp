#include<bits/stdc++.h>

using namespace std;
map<char,int>a;
int main()
{
	string p;
	cin>>p;
	int n;
	cin>>n;
	pair<char,char>A[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i].first>>A[i].second;
	}
	
	for(int i=0;i<n;i++)
	{
		if(A[i].first==p[0]&&A[i].second==p[1])
		{
			cout<<"YES";
			return 0;
		}
		if(A[i].first==p[1]&&A[i].second==p[0])
		{
			cout<<"YES";
			return 0;
		}
		if(A[i].second==p[0])
		{
			for(int j=0;j<n;j++)
			{
				if(i!=j&&A[j].first==p[1])
				{
					cout<<"YES";
					return 0;
				}
			}
		}
	}
	cout<<"NO";
}