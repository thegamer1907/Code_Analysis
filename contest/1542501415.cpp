#include <iostream>
#include<string>
using namespace std;

int main()
{
    string password;
    int n;
    cin>>password;
    cin>>n;
    bool s1=false,s2=false;
    string bark;
    for (int i=0;i<n;i++)
    {   cin>>bark;
        if(password==bark)
        {
            cout<<"YES";
            return 0;
        }
        else{if(password[0]==bark[1])
            s1=true;
        if(password[1]==bark[0])
            s2=true;
    }}
    if(s1 && s2)
        cout<<"YES";
    else
        cout <<"NO";
    return 0;
}
