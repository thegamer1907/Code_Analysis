#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int f1=0,f0=0,i,count=0,p;
    if(s.length()<=7)
        cout<<"NO";
    else
    {
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='1')
                f1++;
            else
                f0++;
        }

        if((s.find("1111111")!=string::npos&&f0)||(s.find("0000000")!=string::npos&&f1))
            cout<<"YES";
        else
            cout<<"NO";
    }
}