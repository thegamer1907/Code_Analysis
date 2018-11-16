#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t;
    char a[50];
    cin>>n>>t;
    for(int i=0; i<n; i++)
        cin>>a[i];
    int i=0;
    char temp;
    while(t--)
    {
        for(i=0; i<n-1;)
        {
            if(a[i]=='B' && a[i+1]=='G')
            {
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
                i+=2;
            }
            else
                i++;
        }
    }
    for(int i=0; i<n; i++)
        cout<<a[i];
    return 0;
}
