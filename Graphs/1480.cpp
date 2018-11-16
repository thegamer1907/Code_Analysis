#include<iostream>

using namespace std;

int main()
{
	int n, t;
	cin>>n>>t;
	int a[n];
	for(int i=1;i<n;i++)
	{
		cin>>a[i];
	}
	int curr = 1;
	bool reached = false;
	while(curr <= t)
	{
		if(curr == t)
		{
			reached = true;
			break;
		}
		else
		{
			curr += a[curr];
		}
	}
	if(reached)
	{
		cout<<"YES\n";
	}
	else
	{
		cout<<"NO\n";
	}
	return 0;
}