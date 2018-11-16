#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=0,n,t;
    char a[50];
    cin>>n>>t;
    for(i=0;i<n;i++)
        cin>>a[i];
    while(j<t)
    {
        i=0;
        while(i<n-1)
        {
            if(a[i]=='B' && a[i+1]=='G')
            {
                a[i]='G';
                a[i+1]='B';
                i=i+2;
            }
            else i=i+1;
        }
        j++;
    }
    for(i=0;i<n;i++)
        cout<<a[i];
    return 0;
}