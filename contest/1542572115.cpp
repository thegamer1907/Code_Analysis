#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int h,m,s,t1,t2;
	cin>>h>>m>>s>>t1>>t2;
	
	if(h==12)
	h=0;
	else 
	h=h*5;
	
	t1=t1*5;
	if(t1==60)
	t1=0;
	t2=t2*5;
	if(t2==60)
	t2=0;
	int flag=0;
	int c=0;
	int x1=t1;
	int x2=t2;
	while(x1!=x2)
	{
	    //cout<<"t1 "<<x1<<endl;
		
		if(x1==h || x1==m || x1==s)
		{
			//cout<<"cant go clockwise "<<endl;
			flag=1;
			break;
		}
		
		x1++;
		if(x1==59)
		{
			x1=0;
		}
	}
	
	if(flag==0)
	cout<<"YES"<<endl;
	
	else if(flag==1)
	{
	int f=0;
	while(t1!=t2)
	{
		t1--;
		//cout<<"t1 "<<t1<<endl;
	    if(t1==-1)
	    t1=59;
		
		if(t1==h || t1==m || t1==s)
		{
			f=1;
			break;
		}
	}
	if(f==0)
	{
		cout<<"YES"<<endl;
	}
	else 
	cout<<"NO"<<endl;
	}
	
}