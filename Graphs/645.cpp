#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#define ll long long int
int main()
{
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int j=1;j<=t;j++)
    {
        int i=0;
        while(i<s.length()-1)
        {
            if(s[i]=='B'&&s[i+1]=='G')
            {
                s[i+1]='B';
                s[i]='G';
                i+=2;
            }
            else
            i++;
        }
    }
    cout<<s<<endl;
    return 0;
}
