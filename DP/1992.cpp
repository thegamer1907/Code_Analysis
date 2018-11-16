#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    long long int count[100001]={0};
    long long int c[n]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x=0;
    for(int i=n-1;i>=0;i--)
    {
        if(count[a[i]]==0)
        {
            count[a[i]]++;
            x++;
        }
        c[i]=x;
    }
    for(int i=0;i<m;i++)
    {
        long long int z;
        cin>>z;
        cout<<c[z-1]<<endl;
    }
}