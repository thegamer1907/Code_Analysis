#include<iostream>
#include<bits/stdc++.h>
#include<sstream>
#include<string>
using namespace std;

int main()
{
    int n, t;
    cin>>n>>t;
    string s;
    cin>>s;
    int len=s.length();
    for(int i=1;i<=t;i++)
    {
        int j=0;
        while(j<len-1)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                char c=s[j];
                s[j]=s[j+1];
                s[j+1]=c;
                j+=2;
            }
            else
                j++;
        }
    }
    cout<<s;

    return 0;
}
