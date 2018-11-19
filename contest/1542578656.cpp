#include<iostream>
using namespace std;

int main ()
{
	int n,i,f=0,s=0;
	string a[102];
	cin>>a[0];
	cin>>n;
	for(i=1;i<=n;i++)
		cin>>a[i];
	for(i=1;i<=n;i++)
	{
		if(a[0][0]==a[i][1])
			f++;
		if(a[0][1]==a[i][0])
			s++;
	//	cout<<f<<s<<endl;
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]==a[0])
		{
			cout<<"YES"<<endl;
			return 0;
		}
	}
	if(f!=0&&s!=0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
