#include <bits/stdc++.h>
#define pb push_back
#define ll long long
#define endl "\n"
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define hell 100001

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   ll n,i;
   double l=0.0;
   double ans=0.0;
   cin>>n>>l;
   double arr[n]={0.0};
   for(i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    ans=arr[0];
    for(i=1;i<n;i++)
        ans=max(ans,(arr[i]-arr[i-1])/2.0);
    ans=max(ans,l-arr[n-1]);
    cout<<std::fixed;
    cout<<setprecision(10)<<ans<<endl;
    return 0;
}
