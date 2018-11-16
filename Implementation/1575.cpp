#include<iostream>
using namespace std;
int main()
{
    int i,l,flag=0;
    string s;
    cin>>s;
    l=s.length();
    for(i=0;i<l-6;i++)
    {
        if(s[i]==s[i+1]&&s[i+1]==s[i+2]&&s[i+2]==s[i+3]&&s[i+3]==s[i+4]&&s[i+4]==s[i+5]&&s[i+5]==s[i+6])
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}
