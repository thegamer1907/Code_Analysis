#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define r(i,s,l) for(int i=s;i<l;i++)

int main()
{
    string str;
    cin>>str;
    ll l=str.length();
    bool flag1=0,flag2=0;
    ll i=0,j=0;
    int pos=-1;
    for(i=0;i<l-1;i++)
    {
        if(str[i]=='A' and str[i+1]=='B')
        {
            pos=i;
            break;
        }
    }
    if(pos!=-1)
    {
        for(i=pos+2;i<l-1;i++)
        {
            if(str[i]=='B' and str[i+1]=='A')
            {
                cout<<"YES";
                return 0;

            }

        }
    }
    pos=-1;
    for(i=0;i<l-1;i++)
    {
        if(str[i]=='B' and str[i+1]=='A')
        {
            pos=i;
            break;
        }
    }
    if(pos!=-1)
    {
        for(i=pos+2;i<l-1;i++)
        {
            if(str[i]=='A' and str[i+1]=='B')
            {
                cout<<"YES";
                return 0;

            }

        }
    }
    cout<<"NO";
    return 0;
}
