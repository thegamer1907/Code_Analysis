#include<bits/stdc++.h>

using namespace std;
typedef int64_t ll;
typedef long double ld;

int h,m,s;
int t1,t2;

int main()
{
	int c1,c2,c3;
	cin>>c1>>m>>s>>t1>>t2;
	c1%=12;h=c1;
	t1%=12;
	t2%=12;
	h=h*30*600+m*60+s;
	m=6*m*600+s*60;
	s=6*s*600;
	t1*=30*600;
	t2*=30*600;
	int a[5];
	a[0]=h,a[1]=m,a[2]=s;
	sort(a,a+3);
	bool check=0;
	if(t1>=a[0]&&t1<=a[1]&&t2>=a[0]&&t2<=a[1])check=1;
	if(t1>=a[1]&&t1<=a[2]&&t2>=a[1]&&t2<=a[2])check=1;
	if(t1<t2)swap(t1,t2);
	if((t1>=a[2]&&t2<=a[0])||(t1>=a[2]&&t2>=a[2])||(t1<=a[0]&&t2<=a[0]))check=1;
	if(check)cout<<"YES\n";
	else cout<<"NO\n";
}
