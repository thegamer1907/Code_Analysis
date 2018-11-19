#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;
double h,m,s;
double S,T;
struct Node
{
	double t; 
	bool flag;
}a[10];
bool cmp(Node a,Node b){return a.t<b.t;}
int main()
{
	cin>>h>>m>>s>>S>>T;
	m+=s/60;
	h+=m/60;
	h/=12; 
	if(h>=1)h-=1.0;
	m/=60; 
	if(m>=1)m-=1.0;
	s/=60; 
	if(s>=1)s-=1.0;
	S/=12; 
	if(S==1)S=0;
	T/=12; 
	if(T==1)T=0;
	a[0]=(Node){h,0};
	a[1]=(Node){m,0};
	a[2]=(Node){s,0};
	a[3]=(Node){S,1};
	a[4]=(Node){T,1};
	int n=5;
	sort(a,a+5,cmp);
	int p1=-1,p2=-1;
	for(int i=0;i<n;i++)
	{
		if(a[i].flag) 
		{
			if(p1==-1)p1=i;
			else p2=i;
		}
	}
	if((p2==p1+1)||(p1==0&&p2==4))cout<<"YES";
	else cout<<"NO";
	
	return 0;
}
