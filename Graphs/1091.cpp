// Example program
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,t;
    
    cin>>n>>t;
    
    int a[n],sum=1;
    
    for(int i=1;i<n;i++)
    {
        cin>>a[i];
    }

    
    sum+=a[1];
    for(int i=1;i<n;i++)
    {
       if(t==sum)
       {
            cout<<"YES";
            return 0;
       }
       
       if(sum>t)
       break;
        
       if(i==sum)
       sum+=a[i];
       
       if(t==sum)
       {
            cout<<"YES";
            return 0;
       }
    }
    
    
    
    
    cout<<"NO";
    
    
    return 0;
}
