#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,a[100005],sum=0,c=0,p=1,f=0,f2=0;
	string s,s1[100005];
	//scanf("%d",&n);
	//scanf(" %s",s);
	cin>>s;
	string r;
	r+=s[1];
	r+=s[0];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		cin>>s1[i];
		if(s1[i]==s)
		{
			printf("YES");
			return 0;
		}
		if(s1[i]==r)
		{
			printf("YES");
			return 0;
		}
		if(s1[i][1]==s[0])
		f=1;
		if(s1[i][0]==s[1])
		f2=1;
		if(f==1 && f2==1)
		{
			printf("YES");
			return 0;
		}
	}
	printf("NO");
}
