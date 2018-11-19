#include<iostream>
using namespace std;
int f[26+10],s[26+10];
int main()
{
	char a,b;
	cin>>a>>b;
	int n;
	cin>>n;
	bool flag=false;
	for(int i=0;i<n;i++)
	{
		char t1,t2;
		cin>>t1>>t2;
		f[t1-'a']=1;
		s[t2-'a']=1;
		if(t1==a&&t2==b)
		{
			flag=true;
		}
	}
	if(s[a-'a']==1&&f[b-'a']==1||flag)
		cout<<"YES";
	else
		cout<<"NO";
	
	return 0;
}