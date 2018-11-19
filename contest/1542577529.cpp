#include <bits/stdc++.h>
#define ll long long
using namespace std;
int a[100000][4];
bool b3[16];
bool b4[4];
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<k;j++)
			cin>>a[i][j];
	}
	if(k==1)
	{
		bool b=false;
		for(int i=0;i<n;i++)
			if(a[i][0]==0)
				b=true;
		if(b)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	else if(k==2)
	{
		bool b=false;
		for(int i=0;i<n;i++)
			if(a[i][0]==0&&a[i][1]==0)
				b=true;
		if(b)
		{
			cout<<"YES"<<endl;
			return 0;
		}
		bool b1=false;
		bool b2=false;
		for(int i=0;i<n;i++)
			if(a[i][0]==0&&a[i][1]==1)
				b1=true;
			else if(a[i][0]==1&&a[i][1]==0)
				b2=true;
		if(b1&&b2)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	else if(k==3)
	{
		bool b=false;
		for(int i=0;i<n;i++)
			if(a[i][0]==0&&a[i][1]==0&&a[i][2]==0)
				b=true;
		if(b)
		{
			cout<<"YES"<<endl;
			return 0;
		}
		memset(b4,false,sizeof b4);
		for(int i=0;i<n;i++)
		{
			if(a[i][0]==0)
				b4[0]=true;
			if(a[i][1]==0)
				b4[1]=true;
			if(a[i][2]==0)
				b4[2]=true;
		}
		for(int i=0;i<n;i++)
		{
			if(a[i][0]==0&&a[i][1]==0&&a[i][2]==1&&b4[2])
				b=true;
			if(a[i][0]==0&&a[i][1]==1&&a[i][2]==0&&b4[1])
				b=true;
			if(a[i][0]==1&&a[i][1]==0&&a[i][2]==0&&b4[0])
				b=true;
		}
		if(b)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	else
	{
		memset(b4,false,sizeof b4);
		memset(b3,false,sizeof b3);
		for(int i=0;i<n;i++)
		{
			if(a[i][0]==0)
				b4[0]=true;
			if(a[i][1]==0)
				b4[1]=true;
			if(a[i][2]==0)
				b4[2]=true;
			if(a[i][3]==0)
				b4[3]=true;
		}
		for(int i=0;i<n;i++)
			b3[a[i][0]+a[i][1]*2+a[i][2]*4+a[i][3]*8]=true;
		bool b=false;
		if(b3[0])
			b=true;
		if(b3[1]&b4[0])
			b=true;
		if(b3[2]&b4[1])
			b=true;
		if(b3[4]&b4[2])
			b=true;
		if(b3[8]&b4[3])
			b=true;
		if(b3[3]&b3[12])
			b=true;
		if(b3[5]&b3[10])
			b=true;
		if(b3[6]&b3[9])
			b=true;
		if(b)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}