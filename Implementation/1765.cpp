#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int cnt=1,f=0;
    for(int i=1;i<n;i++)
    {
        if(s[i]==s[i-1])
        {
            cnt++;
        }
        else
        {
            cnt=1;
        }
        if(cnt==7)
        {
            f=1;
            break;
        }
    }
    if(f==1)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}