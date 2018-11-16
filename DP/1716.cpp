#include <iostream>

using namespace std;

int main()
{
    string a;
    string ans="a";
    cin>>a;
    for(int i=0;i<a.size();i++)
    {

        if(a[i]=='A' and a[i+1]=='B')
        {
            for(int j=i+2;j<a.size();j++)
            {
                if(a[j]=='B' and a[j+1]=='A')
                {
                    ans="yes";
                    break;
                }
            }
        }
    }

    for(int i=0;i<a.size();i++)
    {
                if(ans=="yes")
        {
            break;
        }
        if(a[i]=='B' and a[i+1]=='A')
        {
            for(int j=i+2;j<a.size();j++)
            {
                if(a[j]=='A' and a[j+1]=='B')
                {
                    ans="yes";//
                    break;
                }
            }
        }
    }
    if (ans=="yes")
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
    return 0;
}
