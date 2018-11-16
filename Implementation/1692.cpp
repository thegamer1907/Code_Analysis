#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[101];
    cin>>s;
    if(strstr(s,"1111111")!=0 ||strstr(s,"0000000")!=0)
    {
        cout<<"YES"<<endl;
    }

    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}
