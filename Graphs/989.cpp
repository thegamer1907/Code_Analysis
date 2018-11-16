#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    /*int t;
    cin>>t;

    while(t--)
    {*/
        // Full Traversal Mode
        ll int n, t;
        cin>>n>>t;

        vector<ll int> a(n);
        for(ll int i=1 ; i<a.size() ; i++)
            cin>>a[i];

        bool got = false;

        for(ll int i=1 ;  ; )
        {
            if(i==t)
            {
                got = true;
                break;
            }
            if(i>t)
                break;

            i = i+a[i];

        }

        if(got==true)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    //}
}