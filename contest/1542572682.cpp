#include <bits/stdc++.h>
using namespace std;
typedef long long int ull;


int main()
{
    string r,s;
    cin>>s;
    char a=s[0];
    char b=s[1];
    ull n,f1=0,f2=0;
    cin>>n;
    //cout<<a<<" "<<b<<endl;
    while(n--)
    {
        cin>>r;
        if(r==s)
            {
                f1=1;
                f2=1;
            }
        else
        {
            if(r[1]==a)
                f1=1;
            if(r[0]==b)
                f2=1;
        }
        //cout<<f1<<" "<<f2<<endl;
    }
    if(f1==1 && f2==1)
        cout<<"YES\n";
    else
       cout<<"NO\n";
    return 0;
}
