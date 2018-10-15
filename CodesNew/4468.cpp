#include <iostream>

using namespace std;
string s[500000];
long long i,n,t;
int main()
{
    ios::sync_with_stdio();
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin.ignore(2);
        cin>>s[i];
    }
    for(i=n-2; i>=0; i--)
    {
        if(s[i]<=s[i+1])continue;
        t=0;
        do
        {
            if(s[i][t]>s[i+1][t])
            {
                break;
            }
            t++;
        }
        while(s[i][t]<=s[i+1][t]);
        s[i]=s[i].substr(0,t);

    }
    for(i=0; i<n; i++)cout<<"#"<<s[i]<<"\n";
    return 0;
}
