/*****************************************************

                For someone special....
                For something special..
                              
****************************************************/

/***************************************************
                    266 B
            Queue at the school
***************************************************/
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[j]=='B'&&s[j+1]=='G')
            {
                s[j]='G';
                s[j+1]='B';
                j++;
            }
        }
    }
    cout<<s;
    return 0;
}