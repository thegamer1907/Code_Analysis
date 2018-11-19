#include<iostream>
#include<algorithm>
using namespace std;
int time[60+10];
int main()
{
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	h*=5;
	t1*=5;
	t2*=5;
	h%=60;
	t1%=60;
	t2%=60;
	time[h]++;
	time[m]++;
	time[s]++;
	if(t1>t2)
		swap(t1,t2);
	int ans=0;
	for(int i=t1;i<t2;i++)
		ans+=time[i];
	if(ans%3==0)
		cout<<"YES";
	else
		cout<<"NO";
	
	return 0;
}