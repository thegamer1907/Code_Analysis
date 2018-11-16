#include<bits/stdc++.h>
using namespace std;
//#define ll long long int

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n,t,cnt=0;
    cin>>n>>t;
    int arr[n];

    for(int i=1; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=1; i<n; )
    {
        if(i>t)
        {
            break;
        }
        else if(i==t)
        {
            cnt=1;
            break;
        }
        else
        {
            i+=arr[i];
        }
    }

    if(n==t)
    {
        cnt=1;
    }

    if(cnt==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }

    return 0;
}



