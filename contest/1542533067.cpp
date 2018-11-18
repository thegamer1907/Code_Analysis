#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s2;
    cin>>s;
    //reverse(s.begin(),s.end());
    int t;
    cin>>t;
    string sum;
    int c1=0,c2=0;
    for(int i=0;i<t;i++)
    {
        cin>>s2;
        if(s==s2)
        {
            c1=10;
        c2=10;
    break;
        }
        if(s[0]==s2[1])
            c1=10;
            if(s[1]==s2[0])
                c2=10;
    }
    if(c1==10&&c2==10)
        cout<<"YES";
    else
        cout<<"NO";
        return 0;
}



