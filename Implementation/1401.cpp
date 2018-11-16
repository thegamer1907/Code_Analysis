#include<bits/stdc++.h>
using namespace std;


int main ()
{
    ios_base::sync_with_stdio(false);

    int x,t;
    cin>>x>>t;
    string s;
    cin>>s;


    for(int i=0; i<t; i++)
    {
        for(int j=0; j<x-1; j++)
        {
            if(s[j] == 'B' && s[j+1]=='G')
            {
                s[j] ='G';
                s[j+1] = 'B';
                j++;
            }
        }
    }

    cout<<s;

    return 0;
}


