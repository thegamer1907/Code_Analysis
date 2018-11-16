#include <bits/stdc++.h>

using namespace std;

int main()
{
    int len,i;
    string s;
    cin>>s;
    len=s.size();
    for(i=0;i<len-6;i++)
    {
        if((s[i]=='0')&&(s[i+1]=='0')&&(s[i+2]=='0')&&(s[i+3]=='0')&&(s[i+4]=='0')&&(s[i+5]=='0')&&(s[i+6]=='0'))
        {
            cout<<"YES"<<endl;
            return 0;
        }
        else if((s[i]=='1')&&(s[i+1]=='1')&&(s[i+2]=='1')&&(s[i+3]=='1')&&(s[i+4]=='1')&&(s[i+5]=='1')&&(s[i+6]=='1'))

    {
        cout << "YES" << endl;
        return 0;
    }
    }
        cout<<"NO"<<endl;

    return 0;
}
