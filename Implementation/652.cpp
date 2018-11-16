#include<iostream>

using namespace std;

int main()
{
    int n,k,a[50],i;
    cin>>n>>k;
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[0]==0)
        {
            cout<<"\n0";
            return 0;
        }
        
    }
    i=k-1;
    if(a[k-1]==0)
    {
        while(a[i]==0)
        {
            i--;
        }
        cout<<"\n"<<i+1;
        return 0;
    }
    i=k-1;
    while(a[i]==a[k-1])
    {
      i++;   
    }
    cout<<"\n"<<i;
   
    return 0;
}