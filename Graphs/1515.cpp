#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	int n,t;
	cin>>n>>t;
	int a[n-1];
	for(int i=1;i<n;i++)
	cin>>a[i];
	int flag=0;
	int i=1;
	while(i<n)
	{
		int cnt=i+a[i];
		i+=a[i];
		if(cnt==t){
			flag=1;
			break;
		}
		else if(cnt>t)
		break;
	}
	if(flag==1)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}