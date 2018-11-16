#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    string s;
    int n,t;
    cin>>n>>t;
    cin>>s;
    while(t--)
        for(int i=0; i<s.size(); i++)
            if(s[i]=='B'&&s[i+1]=='G')
            {
                s[i]='G';
                s[i+1]='B';
                i++;
            }
    cout<<s<<endl;
}
