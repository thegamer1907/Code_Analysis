#include<bits/stdc++.h>
using namespace std;
vector<int >a;
int main()
{
    int n,ans=0,x;
    cin>>n;
    for(int i=0;i<n;i++)
        {
            cin>>x;

            a.push_back(x);
        }
        sort(a.begin(),a.end());
int mid=n/2-1,ed=n-1;
for(int i=mid;i>=0;i--)
{
    if(2*a[i]<=a[ed])
    {
        ans++;
        ed--;

    }
}
cout<<n-ans;
}
