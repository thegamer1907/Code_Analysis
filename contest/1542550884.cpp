#include<bits/stdc++.h>
using namespace std;
int main()
{
    string bark,s;
    cin>>bark;
    int n,f=0,l=0,fr=0,lr=0;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s[1]==bark[0])
        {
            fr++;
        }
        if(s[0]==bark[1])
        {
            lr++;
        }
        if(s[0]==bark[0] && s[1]==bark[1])
        {
            f++;
            l++;

        }
        
    }
    if((f>=1 && l>=1) || (fr>=1 && lr>=1))
    {
        cout<<"YES"<<endl;
    }
    else

    {
        cout<<"NO"<<endl;
    }
}
