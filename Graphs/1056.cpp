#include <iostream>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    int a[30000];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<t-1;)
    {
        i+=a[i];
        if(i==t-1) 
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}