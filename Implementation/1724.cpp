#include<iostream>
using namespace std;
#include<string.h>

int main()
{
    char s[100];
    cin>>s;
    int l=strlen(s);
    int c0=0;
    int c1=0;
    int i;
    for(i=0;i<l;i++)
    {
        if(s[i]=='0')
        {
            c1=0;
            c0++;
            if(c0==7)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
        else
        {
            c0=0;
            c1++;
            if(c1==7)
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
