#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int t;
    cin>>t;
    string s;
    cin>>s;
    while(t--)
    {
        for(int i=0;i<n;i++)
        {
            if(s[i]<s[i+1])
            {
                s[i]='G';
                s[i+1]='B';
                i++;
            }
        }
     }
    cout<<s;
}