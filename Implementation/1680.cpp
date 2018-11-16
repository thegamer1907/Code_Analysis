#include<iostream>
using namespace std;
int main()
{
    string s1,s2,s3;
    cin>>s1;
    s2="0000000";
    s3="1111111";
    if (s1.find(s2) != std::string::npos||s1.find(s3) != std::string::npos)
    cout<<"YES";
    else
    cout<<"NO";
}