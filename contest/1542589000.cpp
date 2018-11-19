#include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define mod 1000000007
#define pb push_back
#define pi pair<int,int>
#define vi vector<int>
#define vpi vector< pi > 
int main()
{
	int i,j,k=0,l=0;
	string x,y;
	cin>>x;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>y;
			if(x==y)
			{
				k=1;l=1;
				break;
			}
		if(x[0]==y[1])
				k=1;
		if(x[1]==y[0])
				l=1;
		


	}
	//cout<<k<<l;
	if(k==1&&l==1)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}