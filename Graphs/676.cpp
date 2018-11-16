#include<bits/stdc++.h>
using namespace std;
string s;
int len,a,n;
int main()
{
    cin>>a>>n;
    cin>>s;len=s.size();
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<len;j++)
        {
            if(s[j]=='B'&&s[j+1]=='G')
            {
                swap(s[j],s[j+1]);j++;
            }
        }
    }
    cout<<s;
    return 0;
 } 