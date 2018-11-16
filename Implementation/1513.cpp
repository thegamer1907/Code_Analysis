#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[102];
    int c=0,f,i,g=0;
    cin>>a;
    f=strlen(a);
    for(i=0; i<=f-1; i++)
    {
        if(a[i]=='1')
        {
            ++c;
            if(c==7)
            {
                cout<<"YES"<<endl;
                break;
            }
            g=0;
        }
        else
        {
            ++g;
            if(g==7)
            {
                cout<<"YES"<<endl;
                break;
            }
            c=0;
        }
    }
    if(c!=7 && g!=7)
    cout<<"NO"<<endl;

    return 0;
}
