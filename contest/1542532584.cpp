#include<bits/stdc++.h>

using namespace std;
typedef long long LL;

int chk(int t1,int t2,int a,int b, int c)
{
	a%=3600*60;
	b%=3600*60;
	c%=3600*60;
	t1%=3600*60;
	t2%=3600*60;
	for(;t1!=t2;t1=(t1+1)%(3600*60))
	{
		if(t1==a||t1==b||t1==c){
			return 0;
		}
	}
	return 1;
}


int main()
{
	ios::sync_with_stdio(false);
	
	int h,m,s,t1,t2;cin>>h>>m>>s>>t1>>t2;
	
	if(chk(t1*5*3600,t2*5*3600,h*5*3600+60*m+s,3600*m+60*s,3600*s)==1||chk(t2*5*3600,t1*5*3600,h*5*3600+60*m+s,3600*m+60*s,3600*s)==1)
	{
		cout<<"YES"<<endl;
	}else{
		cout<<"NO"<<endl;
	}
	

	
	return 0;
}