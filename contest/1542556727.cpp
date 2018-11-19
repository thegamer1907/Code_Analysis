#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int h,m,s;
	cin>>h>>m>>s;
	int t1,t2;
	cin>>t1>>t2;

	t1%=12;t1*=5;
	t2%=12;t2*=5;
	h%=12;h*=5;
	h++;
	if(m%5==0) m++;
	if(s%5==0) s++;

	if(t1>t2)
		swap(t1,t2);

	int jumps=0,it=t1;
	while(t1!=t2)
	{
		t1++;
		if(t1==m) jumps++;
		if(t1==s) jumps++;
		if(t1==h) jumps++;
	}
	(jumps==0 || jumps==3)?cout<<"YES":cout<<"NO";
	return 0;
}