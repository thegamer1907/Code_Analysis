#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<utility>
#include<cmath>
using namespace std;
typedef pair <double,int> pdi;

	pdi t[5];

void adjust(int x,int y,double k)
{
	if(t[y].first>0&&t[y].first<30)
		t[x].first+=(0.3*k);
	if(t[y].first==30)
		t[x].first+=(0.5*k);
	if(t[y].first>30)
		t[x].first+=(0.8*k);
}

bool work()
{
	t[0].first*=5;
	t[3].first*=5;
	t[4].first*=5;
	for(int i=0;i<5;i++)
	{
		if(t[i].first>=60)
			t[i].first-=60;
	}
	adjust(1,2,1);   // adjust the minute by second
	adjust(0,1,5);   // adjust the hour by minute
	sort(t,t+5);
	int s,e;
	for(int i=0;i<5;i++)
	{
		if(t[i].second==3)
			s=i;
		if(t[i].second==4)
			e=i;
	}
	if(abs(s-e)==1||abs(s-e)==4)
		return true;
	else
		return false;
}
int main()
{
	//freopen("B.in","r",stdin);
	//freopen("B.out","w",stdout);
	for(int i=0;i<5;i++)
		cin>>t[i].first,t[i].second=i;
	if(work())
		printf("YES\n");
	else
		printf("NO\n");
return 0;
}
