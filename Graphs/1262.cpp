#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main()
{
	int n, t;
	cin>>n>>t;
	int a[n-1];
	for(int i=0;i<n-1;i++) cin>>a[i];
	vector<int> trav;
	int i;
	for(i=0;i<n-1;i=i+a[i]) trav.push_back(i+1);
	trav.push_back(i+1);
	int x = 0;
	for(i=0;i<trav.size();i++)
	{
//		cout<<trav[i]<<" ";
		if(trav[i]==t)
		{
			x = 1;
			cout<<"YES";
			break;
		}
	}
	if(x==0) cout<<"NO";	
	return 0;
}