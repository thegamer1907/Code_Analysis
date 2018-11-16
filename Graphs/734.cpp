#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;
    int n,m;
    cin>>n>>m;
    cin>>s;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n-1;)
        {
            if(s[j]=='B'&&s[j+1]=='G')
            {
                s[j]='G';
                s[j+1]='B';
                j+=2;
            }
            else
                j++;
        }
    }
    cout<<s;
}

