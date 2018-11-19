#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main()
{
    string a,c;
    while(cin>>a)
    {
        int b,x=0,y=0;
        cin>>b;
        while(b--)
        {
            cin>>c;
            if(c[0]==a[1])
                x=1;
            if(c[1]==a[0])
                y=1;
            if(a==c)
                x=1,y=1;
        }
        if(x==1 && y==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
