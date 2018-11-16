#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    int k=1,a[n-1];
    for(int i=0;i<n-1;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        k+=a[k-1];
        if(k>t)
        {
            cout<<"NO";
            return 0;
        }
        if(k==t)
        {
            cout<<"YES";
            return 0;
        }
    }
}