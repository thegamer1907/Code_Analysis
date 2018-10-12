#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    int a[n+2];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int s=0, k=0, mx=-1;
    for(int i=0; i<n; i++)
    {
        s=s+a[i];
        while(s>m)
        {
            s=s-a[k];
            k++;
        }
        mx=max(mx, i-k+1);
    }
    cout<<mx<<endl;
}
