#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pai = acos(-1.0);
const int max1=5e5+5;
#define Mem(x,v) memset(x,v,sizeof(x))
char a[max1];
/*struct A
{
	int num;
  } sss[max1]; 
bool cmp(A a,A b)
{
	return a.num>b.num;
 } */
int main()
{
	ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
	
	int n,i,x=0,m=0,p=0,s=0,ans=0,flag=0;
	for(i=0;i<6;i++)
	{
	cin>>a[i];
	if(a[i]=='m')m++;
	if(a[i]=='p')p++;
	if(a[i]=='s')s++;
	}
	if(m==3||p==3||s==3)
	{
	int x=a[0],y=a[2],z=a[4];
	if(abs(x-y)==1&&abs(x-z)==1&&y!=z)
	flag=1;
	if(abs(y-x)==1&&abs(y-z)==1&&z!=x)
	flag=1;
	if(abs(z-x)==1&&abs(z-y)==1&&x!=y)
	flag=1;
	if(z==x&&x==y)flag=1;
	if(flag==1)
	{
		cout<<0<<endl;flag=-1;
	}	
	}
	if(flag!=-1)
	{
	int x=a[0]-48,y=a[2]-48,z=a[4]-48;
	if(a[1]==a[3])
	{
		if(x==y||abs(x-y)<=2)flag=1;
		}	
		if(a[3]==a[5])
		{
		if(y==z||abs(y-z)<=2)flag=1;	
		}
		if(a[1]==a[5])
		{
		if(x==z||abs(x-z)<=2)flag=1;	
		}
		if(flag==1)cout<<1<<endl;
		else
		cout<<2<<endl; 
	}
	return 0;
 }