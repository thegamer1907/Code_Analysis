#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main()
{
    string s;
    while(cin>>s)
    {
        int t=1;
        for(int i=1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
                t++;
            else
                t=1;
            if(t==7)
            {
                cout<<"YES"<<endl;
                break;
            }
        }
        if(t!=7)
            cout<<"NO"<<endl;
    }
    return 0;
}