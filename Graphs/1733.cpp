#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m;
	while(cin>>n>>m)
	{
		int index=1;
		for(int i=1;i<n;i++)
		{
			int x;
			cin>>x;
			if(index<m&&index==i)
			{
				index+=x;
			}
		}	
		if(index==m)
			cout<<"YES"<<endl;
		else 
			cout<<"NO"<<endl;
	}
	return 0;
}