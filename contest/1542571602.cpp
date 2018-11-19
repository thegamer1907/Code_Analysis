#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin>>s;
    
    int n;
    cin>>n;
    
    string arr[n];
    
    int i;
    
    bool first=false;
    bool second=false;
    
    for(i=0;i<n;i++)
    cin>>arr[i];
    
    for(i=0;i<n;i++)
    {
        if(arr[i]==s)
        {
            cout<<"YES"<<"\n";
            goto skip;
        }
    }
    
    
    
    for(i=0;i<n;i++)
    {
        if(arr[i][1]==s[0])
        first=true;
        
        if(arr[i][0]==s[1])
        second=true;
    }
    
    if(first && second)
    cout<<"YES"<<"\n";
    
    else
    cout<<"NO"<<"\n";
    
    skip:;
    
}
