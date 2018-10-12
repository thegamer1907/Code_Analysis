#include<bits/stdc++.h>
using namespace std;

int main()
{   std::ios_base::sync_with_stdio(NULL);
	cin.tie(NULL); cout.tie(NULL);
    int n,t;
    cin>>n>>t;
    int a[n];
    int sum=0,p=0,ans=0;
    for(int i=0;i<n;i++)
    {   cin>>a[i];
        sum+=a[i];
        while(sum>t) sum=sum-a[p++];
        ans = max(ans,i-p+1);
    }
    cout<<ans;
    return 0;
    
}