#include<iostream>
using namespace std;
int main()
{
    int n,c=0,d=0,e=0;
    char t[3],s[3];
    cin>>t;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s[0]==t[1]&&c!=1)
        c++;
        else
        if(s[1]==t[0]&&d!=1)
        d++;e=c+d;
        if((s[0]==t[1]&&t[0]==s[1])||(s[0]==t[0]&&t[1]==s[1]))
        {
            e=2;
            break;
        }
        
    }
    if(e>1)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}