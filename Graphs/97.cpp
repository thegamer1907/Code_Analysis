#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,i,j;
    cin>>n>>t;
    string s;
    cin>>s;
    for(i=0;i<t;i++)
    {
        for(j=0;j<n-1;)
        {
            if(s[j]=='B' && s[j+1]=='G')
            {
                s[j]='G';
                s[j+1]='B';
                j=j+2;
            }
            else j++;
        }
    }
    cout<<s<<"\n";
    return 0;
}
