#include<bits\stdc++.h>

using namespace std;

int main( )
{
    int n,t,i,j,count=0;
    int a[100000];
    cin>>n >> t;
    for(i=0;i<n-1;i++)
    {
        cin>>a[i];
    }
      j=1;
     while(j<n)
    {
        count=j+a[j-1];
        if(count==t)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        else
        {
            j=count;
        }
    }
    cout<<"NO"<<endl;
    return 0;



}
