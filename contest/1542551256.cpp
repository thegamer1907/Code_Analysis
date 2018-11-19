#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	double h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	if(t1>t2)
	swap(t1,t2);
	int f0=1,f1=1;
	h+=1.0*m/60+1.0*s/3600;
	m+=(1.0*s/60);
	m/=5.0,s/=5.0;
	if(h>=t1&&h<=t2||m>=t1&&m<=t2||s>=t1&&s<=t2)
	f1=0;
	if(h<=t1||h>=t2||m<=t1||m>=t2||s<=t1||s>=t2)
	f0=0;
	if(!f1&&!f0)
	printf("NO");
	else
	printf("YES");
}
