#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define ff first
#define ss second

typedef long long int ll;
ll arr[200005];
int main()
{
//	freopen("in.txt","r",stdin);//freopen("out.txt","w",stdout);
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	ll i,j,k,n;
	cin >> n;
	for(i=1;i<=n;i++){
		cin >> arr[i];
		arr[i]=arr[i-1]+arr[i];
	}
	i=1;j=n;k=0;
	while(i<j)
	{
		if(arr[i]-arr[0]>arr[n]-arr[j-1])
		{
			j--;
		}
		else if(arr[i]-arr[0]<arr[n]-arr[j-1])
		{
			i++;
		}
		else
		{
			k=arr[i]-arr[0];
			i++;
			j--;
		}
	}
	cout << k << endl;
}