#include <iostream>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int a=0,b=0,a1=0;
    for(int i=0; i<s.size()-1; i++)
    {
        if((s[i]=='A'&&s[i+1]=='B'&&s[i+2]=='A')||(s[i]=='B'&&s[i+1]=='A'&&s[i+2]=='B'))
        {
            a1++;
            i+=2;
        }
        else if(s[i]=='A'&&s[i+1]=='B')
        {
            a=1;
            i++;
        }
        else if(s[i]=='B'&&s[i+1]=='A')
        {
            b=1;
            i++;
        }
    }
    if(a&&b)
        cout<<"YES";
    else if(a&&(a1>0))
        cout<<"YES";
    else if(b&&(a1>0))
        cout<<"YES";
    else if(a1>=2)
        cout<<"Yes";
    else
        cout<<"NO";
    return 0;
}
