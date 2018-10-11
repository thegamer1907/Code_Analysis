#include <bits/stdc++.h>

using namespace std;
int main()
{
    long int n,m,v=0;
    cin>>n>>m;
    string a[n],b[m];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
        cin>>b[i];
    if(n>m)
    {
        cout<<"YES";
        return 0;
    }
    else if(n<m)
    {
        cout<<"NO";
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==b[j])
                v++;
        }
    }
    if(v%2==1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}