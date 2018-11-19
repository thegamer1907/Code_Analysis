#include<iostream>
#include<cstring>
#include<cmath>
#include<cstdio>
#include<string>
using namespace std;
string s,t[200],x;
int main()
{
    int n;
    int j;
    cin>>s;
    cin>>n;
    int i;
    for (i=1;i<=n;i++)
    {
        cin>>t[i];
    }
    for (i=1;i<=n;i++)
        for (j=1;j<=n;j++)
        {
            string tmp=t[i]+t[j];
            //cout<<tmp<<endl;
            for (int pos=1;pos<tmp.length();pos++)
                if (tmp[pos-1]==s[0]&&tmp[pos]==s[1])
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
        }
    cout<<"NO"<<endl;

}
