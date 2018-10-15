//Sourav
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ff first 
#define ss second
#define vc vector<pair<int,int>>
void Fastio()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
void solve()
{
	int n,m,mini;
	cin>>n;
	cin>>m;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int maxi=arr[0];
	for(int i=1;i<n;i++)
	{
		if(arr[i]>maxi)
			maxi=arr[i];
	}
	sort(arr,arr+n);
	int sum=0;
	for(int i=0;i<n-1;i++)
	{
		sum+=(arr[n-1]-arr[i]);
	}
	mini=arr[n-1];
	if(sum<m)
	{
		 mini+=((m-sum)/n);
		 if((sum-m)%n!=0)
		 {
		 	mini++;
			 }	
	}
	cout<<(mini)<<" "<<maxi+m<<endl;
	
}

int main() {
	Fastio();
		solve();
	return 0;
}
