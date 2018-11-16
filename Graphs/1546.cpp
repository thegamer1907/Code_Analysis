#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,i,mew=0;
    cin>>n>>t;
    int arr[n-1];
    for(i=0;i<(n-1);i++)
        cin>>arr[i];
    i=1;
    while(mew<t)
    {
        mew=arr[i-1]+i;
        if(mew==t)
        {
            cout<<"YES\n";
            return 0;
        }
        else
            i=mew;
    }
    cout<<"NO\n";
}