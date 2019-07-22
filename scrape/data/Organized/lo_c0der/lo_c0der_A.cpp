#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
ll n,m,k;
cin>>n>>m>>k;
ll p[m];
for(int i=0;i<m;i++)
cin>>p[i];
ll cnt=0,j=k,op=0;
for(int i=0;i<m;)
{   if(p[i]>j)
	{   
		ll gg=(p[i]-j);
		j+=k*(gg/k)+((gg%k==0)?0:k);
		cnt=0;
		for(;i<m;i++)
		{
			if(p[i]<=j)
			{cnt++;}
			else
			break;
		}
		j+=cnt;
		op++;
		
	}
	else if(p[i]<=j)
	{  // cout<<j<<" "<<p[i]<<endl;
		cnt=0;
		for(;i<m;i++)
		{
			if(p[i]<=j)
			{cnt++;}
			else
			break;
		}
		//cout<<cnt<<" "<<endl;
		j+=cnt;
		op++;
	}
	
}
cout<<op;
}