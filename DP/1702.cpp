#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int k=1,g=1,f=0;
    for(int i=0;i<s.size()-1;i++)
    {
        if(i<s.size()-2)
        {
            if(s[i]=='A'&&s[i+1]=='B'&&s[i+2]!='A')
        {
            k-=1;
        }
        else if(s[i+1]=='A'&&s[i]=='B'&&s[i+2]!='B')
        {
            g-=1;
        }
        else if(s[i+1]=='A'&&s[i]=='B'&&s[i+2]=='B')
        {
            f+=1;
            i+=2;
        }
        else if(s[i+1]=='B'&&s[i]=='A'&&s[i+2]=='A')
            {
                f+=1;
                i+=2;
            }
        }
        else
        {
            if(s[i]=='A'&&s[i+1]=='B')
        {
            k-=1;
        }
        if(s[i+1]=='A'&&s[i]=='B')
        {
            g-=1;
        }
        }
        if(g<1&&k<1)
        {
            cout<<"YES";
            return 0;
        }
        if(f>1)
        {
            cout<<"YES";
            return 0;
        }
        if(f==1&&k<1)
            {
            cout<<"YES";
            return 0;
            }
        if(f==1&&g<1)
            {
            cout<<"YES";
            return 0;
            }
    }
    cout<<"NO";
    return 0;

}
