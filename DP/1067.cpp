#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	/*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
 	#endif*/

    int n;
    cin>>n;
    int arr[n+1];
    int count=0;
    for(int i=0;i<n;i++)
    {
    	cin>>arr[i];
    	if(arr[i]==1)
    	{
    		count++;
    		arr[i]=-1;
    	}
    	else
    	{
    		arr[i]=1;
    	}
    }
    int m,ans;
    m=arr[0];
    ans=arr[0];
    for(int i=1;i<n;i++)
    {
    	m=max(arr[i]+m,arr[i]);
    	if(m>ans)
    	{
    		ans=m;
    	}
    }
    cout<<ans+count<<endl;
}