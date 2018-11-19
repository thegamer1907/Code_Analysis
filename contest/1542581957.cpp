#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int h,m,s;
	int h1,m1,s1;
	cin>>h1>>m1>>s1;
	h1%=12;
	s=(s1*3600)/5;
	m=(m1*3600)/5+(s1*3600)/300;
	h=h1*3600+m1*60+s1;
	int t1,t2;
	cin>>t1>>t2;
	t1%=12;
	t1*=3600;
	t2%=12;
	t2*=3600;
	int a,b;
	a=min(t1,t2);
	b=max(t1,t2);
	bool b1=false;
	if((h>a&&h<b)&&(m>a&&m<b)&&(s>a&&s<b))
		b1=true;
	if((h<a||h>b)&&(m<a||m>b)&&(s<a||s>b))
		b1=true;
	if(b1)
	{
		cout<<"YES"<<endl;
	}
	else
	{
		cout<<"NO"<<endl;
	}
	return 0;
}