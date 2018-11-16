#include<bits/stdc++.h>
using namespace std;
bool mark[100010];
int sum[100010];
int main()
{
    int arr[100010];
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=n-1;i>=0;i--)
    {
        if(!mark[arr[i]])
        {
            sum[i] = sum[i+1] + 1;
            mark[arr[i]] = 1;
        }
        else
        {
            sum[i] = sum[i+1];
        }
    }

    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        cout<<sum[x-1]<<endl;
    }
    return 0;
}
