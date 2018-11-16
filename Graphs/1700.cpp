#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=1;i<n;i++){
		cin>>a[i];
		a[i]+=i;
	}
	int i=1;
	while(i<k)
	{
		i=a[i];
	}
	if(i==k)
		cout<<"YES";
	else
		cout<<"NO";
}
