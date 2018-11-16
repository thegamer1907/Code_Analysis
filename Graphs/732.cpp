#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    string s;
    cin>>s;
    if(s.length()==1)
    {
        cout<<s;
        return 0;
    }
    while(t--)
    {
        int i=1;
        while(i<n)
        {
            if(s[i]=='G')
            {
                if(s[i-1]=='B')
                {
                    swap(s[i],s[i-1]);
                }
                i=i+2;
            }
            else if(s[i]=='B')
            {
                i++;
            }
        }
    }
    cout<<s;
    return 0;
}