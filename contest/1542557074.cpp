#include<bits/stdc++.h>
using namespace std;

int main()
{
string s;
cin>>s;
int n;
cin>>n;
string arr[n];
int i,j;
int flag=0;
for(i=0;i<n;i++)
	{
	cin>>arr[i];
	if(s.compare(arr[i])==0)
		flag=1;
	}
string ans;
for(i=0;i<n;i++)
	{
	for(j=0;j<n;j++)
		{
		ans.clear();
		ans+=arr[i][1];
		ans+=arr[j][0];
		if(ans.compare(s)==0)
			{
			flag=1;
			break;
			}
		}
	if(flag==1)
		break;
	}
if(flag==0)
	cout<<"NO"<<endl;
else
	cout<<"YES"<<endl;
}