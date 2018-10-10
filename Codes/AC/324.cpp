#include <bits/stdc++.h>

using namespace std;

pair<int,int> arr[123456];
int n;
int bs(int x)
{
    int s=1,e=n,mid;
    while(s<=e)
    {
        mid=(s+e)/2;
        //cout<<mid<<endl;
        if(x>=arr[mid].first&&x<=arr[mid].second)
        {
            /*
            cout<<arr[mid].first<<" "<<arr[mid].second<<endl;
            cout<<mid<<endl;
            */
            return mid;
        }
        else if(arr[mid].first>x)
        {
            /*
            cout<<"E"<<endl;
            cout<<x<<" "<<arr[mid].first<<endl;
            */
            e=mid-1;
        }
        else
        {
            /*
            cout<<"S"<<endl;
            cout<<x<<" "<<arr[mid].first<<endl
            */
            s=mid+1;
        }
    }
}

int main()
{
    long long sum=0,x;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x;
        arr[i]=make_pair(sum+1,sum+x);
        sum+=x;
    }
    //for(int i=1;i<=n;i++) cout<<arr[i].first<<" "<<arr[i].second<<endl;

    sort(arr,arr+n);
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        int ans=bs(x);
        cout<<ans<<endl;

    }
    return 0;
}