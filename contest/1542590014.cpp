#include <iostream>
#include<cstring>
using namespace std;

string s;
string s1[11010];
string tots;
int ans=0,n;

int check()
{
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
        {
            string ss;
            ss+=s1[i];
            ss+=s1[j];
            for(int k=0;k<ss.size()-1;k++)
            {
                if(ss[k]==s[0]&&ss[k+1]==s[1])
                    return 1;
            }
        }
    return 0;
}

int main()
{
    cin>>s;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>s1[i];
    if(check())
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}