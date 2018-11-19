#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3;
    int n;
    while(cin>>s1)
    {
        s3="";
        int a=0,b=0,c=0;
        cin>>n;
        while(n--)
        {
           // char c=getchar();
            cin>>s2;
            if(s2[1]==s1[0])
            {
                a=1;
            }
            if(s2[0]==s1[1])
            {
                b=1;
            }
            if(s2==s1)
            {
                c=1;
            }
        }
        if((a&&b)||c)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
