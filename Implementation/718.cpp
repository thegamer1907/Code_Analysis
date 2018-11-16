#include<iostream>
using namespace std;
int main()
{
    int n,t,temp;
    cin>>n>>t;
    char a[n];
    cin>>a;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<n;)
        {
            if(a[j]=='B'&&a[j+1]=='G'&&j<=n-2)
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                j+=2;
            }
            
            else
            {
                j++;
            }
            
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}