#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(0);
int n,m,cnt=0;
cin >> n >> m;
int arr[n];
for( int i=0;i<n-1;i++ )
{
    cin >> arr[i];
}
for( int i=0;i<n-1;i+=arr[i] )
{
    cnt+=arr[i];
    if( cnt==m-1 )
    {
        cout<<"YES";
        return 0;
    }
}
cout<<"NO";

}
