#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define x first
#define y second
using namespace std;

bool compare(int a,int b)
{
    return a>b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n,k;
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    sort(arr,arr+n,compare);
    if(arr[0]<=0)
    {
        cout<<"0";
        return 0;
    }
    if(arr[k-1]<=0)
    {
        for(int i=0;i<n;i++)
        {
            if(arr[i]<=0)
            {
                cout<<i;
                return 0;
            }
        }
    }
    while(arr[k]==arr[k-1])
        k++;
    cout<<k;
}
