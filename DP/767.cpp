#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin>>n;
    int arr[n], arr2[n], ones[n], ans=0, cntr=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        arr2[i]=arr[i];
        if(arr[i])  ones[i]++;
        ones[i]+=ones[i-1];
    }
    if(n==1&&arr[0]==1)
    {
        cout<<0<<endl;
        return 0;
    }
    else if(n==1&&arr[0]==0)
    {
        cout<<1<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                arr2[k]=!(arr2[k]);
            }
            for(int c=0;c<n;c++)
            {
                if(arr2[c])
                    cntr++;
                arr2[c]=arr[c];
                // cout<<arr2[c]<<endl;;
            }
            ans=max(ans, cntr);
            cntr=0;
        }
    }
    cout<<ans;
}
