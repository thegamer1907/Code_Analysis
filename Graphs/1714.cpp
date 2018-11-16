#include<bits/stdc++.h>
#define mod 1000000007
#define pb push_back
#define ff first
#define ss second
#define ii pair<int,int>
#define vi vector<int>
#define vii vector<ii>
#define lli long long int
using namespace std;

int main()
{
	int n , t;
	cin>>n>>t;
	vi ar(n);
	for(int i=1;i<n;i++)
	cin>>ar[i];
	
	int curr = 1;
	while(curr<t)
	{
		if(curr>=t) break;
		
		else
		curr+=ar[curr];
	}
	
	if(curr==t)
	cout<<"YES";
	else
	cout<<"NO";
}
