#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    string s;
    cin>>s;
    for(int j=0;j<b;j++){
    for(int i=0;i<a;i++)
    {
        if(s[i]=='B'&&s[i+1]=='G')
        {
            s[i]='G';s[i+1]='B';i++;
        }
    }}
    cout<<s;
}