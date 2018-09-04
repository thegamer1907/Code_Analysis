//QWsin
#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#define rep(i,x,y) for(int i=x;i<=y;++i)
using namespace std;

const int maxn=100000+10;

int a[maxn];

int main()
{
	
	int n;cin>>n;
	
	int m=1<<30;
	rep(i,1,n) {
		scanf("%d",a+i);
		m=min(m,a[i]);
	}
	
	int Pos=(m)%n+1,step=m;
	
	while(1)
	{
		if(a[Pos] <= step) {cout<<Pos<<endl;break;}
		++Pos;
		if(Pos==n+1) Pos=1;
		++step;
	}
	
	return 0;
}
