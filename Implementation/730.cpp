#include<bits/stdc++.h>
using namespace std;
int main()
{
	//code
	int n,t;
	static int flag;
	cin>>n>>t;
	char q[n+1],temp;
	q[n]='A';
	for(int i=0;i<n;i++)
		cin>>q[i];
	while(t>0)
	{	flag=1;
		for(int j=0;j<n;j++)
		{
			if((q[j]=='B'&&q[j+1]=='G')&&flag==1)
			{
				temp=q[j];
				q[j]=q[j+1];
				q[j+1]=temp;
				if(q[j+1]=='B'&&q[j+2]=='G')
					flag*=(-1);
			}
			else
				flag=1;
		}
		t--;
	}
	for(int k=0;k<n;k++)
		cout<<q[k];
	return 0;
}
