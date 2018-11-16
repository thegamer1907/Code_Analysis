#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;

    string s;
    cin>>s;
    while(t--)
    {
       for(int i=1;i<n;i++)
       {
           int c=0;
           if( s[i]=='G' && s[i-1]=='B')
           {
               s[i]='B';
               s[i-1]='G';
               i++;
           }


       }
    }
    cout<<s;
    return 0;
}
