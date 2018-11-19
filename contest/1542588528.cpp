#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    char s[3];
    cin>>s;
    char ss[3];
    int one=0,two=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ss;
        if(strcmp(ss,s)==0)
        {
            one=1,two=1;
            continue;
        }
        if(ss[0]==s[1])
            two=1;
        if(ss[1]==s[0])
            one=1;
    }
    if(one&&two)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}