#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,k,a[1002],cnt=0;

    cin>>n>>k;

    for(i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<n; i++)
    {
        if(a[i]>=a[k-1] && a[i]>0)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}