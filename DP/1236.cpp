#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	
	vector<int> a(n);
	vector<int> b(n);
	
	for(int i=0;i<n;i++)
	{
		cin >> a[i];
		if(a[i]==0) b[i]=1;
		else b[i]=-1;
	}
	
	int s=0;
	int mx=0;
	int mx_i=0;
	int mx_j=0;
	int s_i=0;
	int s_j=0;
	
	for(int i=0;i<n;i++)
	{
		s+=b[i];
		if(s>mx)
		{
			mx_i=s_i;
			mx_j=i;
			mx=s;
		}
		if(s<0)
		{
			s=0;
			s_i=i+1;
		}
	}
	
	//cout << mx_i << " " << mx_j << endl;
	mx=0;
	for(int i=0;i<n;i++)
	{
		if(i>=mx_i && i<=mx_j)
		{
			mx+=1-a[i];
		}
		else
		mx+=a[i];
	}
	
	cout << mx << endl;
}