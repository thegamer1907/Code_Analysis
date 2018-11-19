#include <bits/stdc++.h>
using namespace std;
vector < string >v;
map < string,int >m;
int a[5]={0},n,k,b[100]={0},i,j,x,c[5],l,y,temp=0,flag,count1;
void fun(int hieght)
{
	string s;
	char c;
	int i;
	if(hieght==4)
	{
		s="";
		for(i=1;i<=4;i++)
			if(a[i]>0)
				{
					c=i+48;
					s+=c;
				}
		v.push_back(s);
		m[s]=v.size()-1;
		return;
	}
	fun(hieght+1);
	a[hieght+1]++;
	fun(hieght+1);
	a[hieght+1]--;
}
int main()
{
	string str;
	char ch;
	fun(0);
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	{
		str="";
		for(j=1;j<=k;j++)
		{
			scanf("%d",&x);
			if(x==1)
			{
				ch=j+48;
				str+=ch;
			}
		}
		j=m[str];
		b[j]++;
	}
	j=v.size();
	x=1;
	while(j>0)
	{
		x=x*2;
		j--;
	}
	x--;
	for(i=1;i<x;i++)
	{
		memset(c,0,sizeof(c));
		j=0;
		l=i;
		count1=0;
		while(l>0)
		{
			if((l%2 == 1) && (b[j]>0))
			{
				count1++;
				str=v[j];
				for(y=0;y<str.size();y++)
				{
					ch=str[y];
					c[ch-48]++;
				}
			}
			l=l/2;
			j++;
		}
		flag=0;
		for(y=1;y<=k;y++)
			if(count1>0 && c[y]<=count1/2)
			{
				continue;
			}
			else
			{
				flag=1;
				break;
			}
		if(flag==0)
		{
			temp=1;
			break;
		}
	}
	if(temp==1)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}