#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k;

    cin>>n>>k;

    int a[55]={0};

    for(int i=0;i<n;i++)    {
        cin>>a[i];
    }

    if(a[k-1]==0)   {
        int i=k-1,j=k;
        while(a[i]==0 && i>=0)  {
            j--;
            i--;
        }
        cout<<j<<endl;

        return 0;
    }
    int ith=a[k-1],i=k;

    while(a[i]>=ith)    {
        k++;
        i++;
    }
    cout<<k<<endl;

    return 0;
}
