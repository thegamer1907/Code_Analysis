#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t, k, i, j, n;
    cin>>n>>k;
    string s;
    cin>>s;
    for(i=1;i<=k;i++)
    {
        for(j=1;j<n;)
        {
            if(s[j-1]=='B' && s[j]=='G')
            {
                s[j]='B';
                s[j-1]='G';
                j+=2;
            }
            else
                j++;
        }
    }
    cout<<s;
    return 0;
}