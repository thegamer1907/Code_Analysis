#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int flag=1;
    if(s.length()<7)
        flag=0;
    else
    {
        for(int i=0;i<=s.length()-7;i++)
    {
        flag=1;
        for(int j=i+1;j<=i+6;j++)
        {
            if(s[i]!=s[j])
            {
                flag=0;
                break;
            }
        }
        if(flag)
            break;
    }
    }
    if(flag)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
