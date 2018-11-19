#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<cstring>
using namespace std;
bool a[50000];
int main()
{
	memset(a,0,sizeof(a));
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	double fen=1.0*m/5;
	double miao=1.0*s/5;
	bool f=false;
	h=h*3600;
	fen=fen*3600;
	miao=miao*3600;
	h+=m*60+s;
	if(h>=43200) h-=43200;
	fen+=s;
	if(fen>=43200) fen-=43200;
	if(miao>=43200) miao-=43200;
	int q=fen,w=miao;
	t1*=3600;t2*=3600;
	if(t1>=43200) t1-=43200;
	if(t2>=43200) t2-=43200;
	a[h]=1;a[q]=1;a[w]=1;
	for(int i=t1,sum=1;sum<=43200;sum++,i++)
	{
		if(i>=43200)
			i-=43200;
		if(a[i])
			break;
		if(i==t2)
			f=1;
	}
	for(int i=t1,sum=1;sum<=43200;sum++,i--)
	{
		if(i<0)
			i=43200-1;
		if(a[i])
			break;
		if(i==t2)
			f=1;
	}
	if(f)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
