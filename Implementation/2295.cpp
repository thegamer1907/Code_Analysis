#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;	cin>>n;
	string s;	cin>>s;
	int sum=0,j;
	for(int i=0;i<n;i=j)
	{
		int flag=0;
		for(j=i+1;j<n;j++)
		{
			if(s[i]==s[j])
				flag++;
			else	break;
		}
		sum=sum+flag;
	}
	cout<<sum;
	return 0;
}