#include<bits/stdc++.h>
using namespace std;
int main()
{
    int chk=0,chk2=0,chk3=0,chk4=0;
    string str,str2;
    cin>>str;
    str2=str;
    for(int i=0;i<str.size()-1;i++)
    {
        if(str[i]=='A' && str[i+1]=='B')
        {
            chk++;
            str[i]='1';
            str[i+1]='2';
            break;
        }
    }
    for(int i=0;i<str.size()-1;i++)
    {
        if(str[i]=='B' && str[i+1]=='A')
        {
            chk2++;
            str[i]='1';
            str[i+1]='2';
            break;
        }
    }

    for(int i=0;i<str2.size()-1;i++)
    {
        if(str2[i]=='B' && str2[i+1]=='A')
        {
            chk3++;
            str2[i]='1';
            str2[i+1]='2';
            break;
        }
    }

    for(int i=0;i<str2.size()-1;i++)
    {
        if(str2[i]=='A' && str2[i+1]=='B')
        {
            chk4++;
            str2[i]='1';
            str2[i+1]='2';
            break;
        }
    }


    if((chk!=0 && chk2!=0) || (chk3!=0 && chk4!=0))
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
