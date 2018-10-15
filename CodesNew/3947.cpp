#include<bits/stdc++.h>
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	long long int n,q;
	cin>>n>>q;
	vector<long long int> a(n);
	vector<long long int> pre(n);
	
	vector<long long int> k(q);
	for(long long int i=0;i<n;i++)
	{
		cin>>a[i];
		
	}
	pre[0]=a[0];
	for(long long int i=1;i<n;i++)
	{
		pre[i]=pre[i-1]+a[i];
	}
	/*for(int i=0;i<n;i++)
	{
		cout<<pre[i]<<" ";
	}*/
	//cout<<endl;
	long long int x;
	long long int arrows=0;
	for(long long int i=0;i<q;i++)
	{
		cin>>x;
		arrows+=x;
		
		long long int index=upper_bound(pre.begin(),pre.end(),arrows)-pre.begin();
		
		
		//cout<<arrows<<" "<<index<<endl;
		
		if(arrows>=pre[n-1])
		{
			arrows=0;
			cout<<n<<endl;
		}
		else
		{
			cout<<n-index<<endl;
		}
	}
	
	
	
	
	
}