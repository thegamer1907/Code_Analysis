#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    cin>>s1;
    s2="0000000";
    s3="1111111";
    if(strstr(s1.c_str(),s2.c_str()))
    {
        cout <<"YES"<<endl;
    }
    else if(strstr(s1.c_str(),s3.c_str()))
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
