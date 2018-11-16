#include<iostream>
using namespace std;
main()
{
    int n;cin>>n;
    int t;cin>>t;
    bool answer=false;
    int location=1;
    int a[n];
    for (int i=1;i<n;i++)
        cin>>a[i];
    for (int i=0;i<n;i++)
    {
        if (location==t)
        {
            answer=true;break;
        }
        if (location>t)
            break;
        location+=a[location];
    }
    if (answer)
        cout<<"YES";
    else
        cout<<"NO";
}
