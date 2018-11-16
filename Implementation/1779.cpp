#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int l=s.length();
    for(int i=0;i<=l-7;++i)
    {
        if(i<l-1)
        {
            if(s[i]=='0'&&s[i+1]=='0'&&s[i+2]=='0'&&s[i+3]=='0'&&s[i+4]=='0'&&s[i+5]=='0'&&s[i+6]=='0')
                {
                    cout<<"YES";
                    return 0;
                }
            if(s[i]=='1'&&s[i+1]=='1'&&s[i+2]=='1'&&s[i+3]=='1'&&s[i+4]=='1'&&s[i+5]=='1'&&s[i+6]=='1')
                {
                    cout<<"YES";
                    return 0;
                }

        }
    }
    cout<<"NO";
    return 0;
}
