#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    bool fAB=false ,fBA=false;
    int i;
    cin>>s;
    for(i=0;i<s.size()-1;i++)
    {

        if(s[i]=='A' && s[i+1]=='B' && fAB==false )
        {
            i++;
            fAB=true;
        }
        else if(fAB==true && s[i]=='B' && s[i+1]=='A')
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }

    for(i=0;i<s.size()-1;i++)
    {

        if(s[i]=='B' && s[i+1]=='A' && fBA==false )
        {
            i++;
            fBA=true;
        }
        else if(fBA==true && s[i]=='A' && s[i+1]=='B')
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;
    return 0;
}
