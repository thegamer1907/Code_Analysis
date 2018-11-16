#include <bits/stdc++.h>

using namespace std;

int a[100];

int main()
{
    int n,k,v,w;
    cin>>n>>k;
    if (k!=1) {cout<<"Yes"; return 0;}
    for (int i=0;i<n;i++)
    {
        cin>>a[i];
        if (a[i]==0) v=i;
    }
    cin>>a[v];
    for (int i=0;i<n-1;i++)
    {
        if (a[i]>a[i+1])
        {
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
}

