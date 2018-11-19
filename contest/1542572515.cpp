#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1,s;
    long i,n,k,c=0,b=0;
    cin>>s1;
    cin>>n;
    while(n--)
    {
        cin>>s;
        if(s[0]==s1[1])
            c++;
        if(s[1]==s1[0])
            b++;
        if(c>0&&b>0)
        {
            cout<<"YES"<<endl;
            return 0;
        }
        if(s==s1)
        {
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}