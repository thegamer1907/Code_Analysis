#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1,s2;
    int match=0,rev=0,first_in_2nd=0,last_in_1st=0,n,i;
    cin>>s1>>n;
    for(i=1;i<=n;i++)
    {
        cin>>s2;
        if(s1==s2)
        {
            match=1;
        }
        if(s2[0]==s1[1])
        {
            last_in_1st=1;
        }
        if(s2[1]==s1[0])
        {
            first_in_2nd=1;
        }
    }
    if(match==1||(first_in_2nd==1 && last_in_1st==1))
    {
        cout<<"YES\n";
    }
    else
        cout<<"NO\n";

}
