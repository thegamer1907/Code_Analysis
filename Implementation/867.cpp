#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    char a[60];
    for(int i=1;i<=n;i++)
    {
       cin>>a[i];
    }
    while(t--)
    {
       for(int i=n;i>=2;i--)
       {
           if(a[i]=='G'&&a[i-1]=='B')
           {
               char temp;
               temp=a[i];
               a[i]=a[i-1];
               a[i-1]=temp;
               i--;
           }
       }
    }
    for(int i=1;i<=n;i++)
        cout<<a[i];
    cout<<endl;
    return 0;
}
