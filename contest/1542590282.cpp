#include<bits/stdc++.h>

using namespace std;

int main()
{
    string given;
    cin>>given;
    int n,red=0;
    cin>>n;
    string s[n+7],ss;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            ss=s[i]+s[j];
            for(int k=0;k<=2;k++)
            {
                string tmp;
                tmp=ss.substr(k,2);
                if(tmp==given)
                {
                    i=j=n;
                    red=1;
                    break;
                }
            }
        }
    }
    if(red==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
