#include<cstdio>
#include<algorithm>
#include<cstring>
#include<queue>
#include<iostream>
#define inf 1e9
#define MN
using namespace std;
int k1,k2,k3,a,b,c,s,t;
int main()
{
	cin>>a>>b>>c>>s>>t;
	a%=12;s%=12;t%=12;
	k1=a*3600+b*60+c;
	k2=b*720+c*12;
	k3=c*720;
	if(k2>k3)swap(k2,k3);
	if(k1>k3)swap(k1,k3);
	if(k1>k2)swap(k2,k1);
	s*=3600;
	t*=3600;
	if((s<=k1||s>=k3)&&(t<=k1||t>=k3)||s>=k1&&s<=k2&&t>=k1&&t<=k2||s>=k2&&s<=k3&&t>=k2&&t<=k3)puts("YES");
	else puts("NO");
	return 0;
}