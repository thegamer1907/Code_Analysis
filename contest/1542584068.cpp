#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    string a,c;
    while(cin>>a)
    {
        LL b,m=0,n=0;
        cin>>b;
        while(b--)
        {
            cin>>c;
            if(c[0]==a[1])
                m=1;
            if(c[1]==a[0])
                n=1;
            if(a==c)
                m=1,n=1;
        }
        if(m==1 && n==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
