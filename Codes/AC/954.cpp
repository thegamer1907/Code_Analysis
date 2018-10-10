#include<bits/stdc++.h>
using namespace std;
int arr[100100];
char s[100100];


int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	scanf("%s",s);
	int cnt=0;
	int use=0;
	int maxx=0;
	int l=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='a')
		{
			cnt++;
			maxx=max(maxx,cnt);
		}
		else
		{
			cnt++;
			use++;
		}
		while(use>k)
		{
			cnt--;
			if(s[l]=='b')
			{
				use--;
			}
			l++;
		}
		maxx=max(maxx,cnt);
	}
	 l=0;
	cnt=0;
	use=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='b')
		{
			cnt++;
			maxx=max(maxx,cnt);
		}
		else
		{
			cnt++;
			use++;
		}
		while(use>k)
		{
			cnt--;
			if(s[l]=='a')
			{
				use--;
			}
			l++;
		}
		maxx=max(maxx,cnt);
	}
	cout<<maxx<<endl;

	return 0;
}