#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a;
    int p=0,q=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>b;
        if(a==b)
        {
            cout<<"YES\n";
            return 0;
        }
        if(a[0]==b[1])
            p=1;
        if(a[1]==b[0])
            q=1;

    }
    if(p==1 && q==1)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}
