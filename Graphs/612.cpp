#include <iostream>
#include <string>
#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int n,t,i,j;
    cin>>n>>t;
    string s;
    cin>>s;
    char str[n];
    strcpy(str,s.c_str());
    for(j=0;j<t;j++)
    {
    for(i=0;i<n-1;i++)
    {
        if(str[i]=='B'&& str[i+1]=='G')
        {
            str[i]='G';
            str[i+1]='B';
            i++;
        }
    }
    }
    for(i=0;i<n;i++)
    {
        cout<<str[i];
    }
    return 0;
}