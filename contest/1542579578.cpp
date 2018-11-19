#include<bits/stdc++.h>
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define dep(i,a,b) for(int i=a;i>=b;i--)
#define mem(x,num) memset(x,num,sizeof x)
using namespace std;
double h,m,s,t1,t2;
bool first,second;
int main()
{
	first=second=true;
	cin>>h>>m>>s>>t1>>t2;
	if(h==12)h=0;
	if(t1==12)t1=0;
	if(t2==12)t2=0;
	h=h*30+m/60+s/3600;
	m=(m+s/60)*6;
	s=s*6;
	t1*=30,t2*=30;
	//cout<<h<<endl<<m<<endl<<s<<endl<<t1<<endl<<t2<<endl;
	if(t1>t2)swap(t1,t2); 
	if(h>t1&&h<t2)first=false;
	if(m>t1&&m<t2)first=false;
	if(s>t1&&s<t2)first=false;
	if(h>t2&&h<=360)second=false;
	if(m>t2&&m<=360)second=false;
	if(s>t2&&s<=360)second=false;
	if(h<t1&&h>=0)second=false;
	if(m<t1&&m>=0)second=false;
	if(s<t1&&m>=0)second=false;
	if(first||second)cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}