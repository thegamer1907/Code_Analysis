#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
ll cal(int n)
{
	ll mul=1;
	if(n==0)
	{
		return 1;
	}
	else if(n==1)
	{
		return 2;
	}
	else 
	{
		if(n%2==1)
		{
			mul=2;
		}
		mul = (mul*(cal(n/2)*cal(n/2))%MOD)%MOD;
		return mul;
	}
}


ll cal2(map<int ,int > &mp,int n)
{
	int i;
	map<int ,int > :: iterator it1,it2;	
}
int main()
{
	int n,m,num,i;
	cin>>n>>m;
	vector<int >a(n);
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	set<int > st;
	vector<int > count(n);
	int c=0;
	for(i=n-1;i>=0;i--)
	{
		if(st.find(a[i])==st.end())
		{
			st.insert(a[i]);
			c++;
		}
		count[i]=c;
	}
	for(i=0;i<m;i++)
	{
		cin>>num;
		cout<<count[num-1]<<endl;
	}
	return 0;
}

