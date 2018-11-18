#include<string>
#include<iostream>
using namespace std;
int n,m;
string s[205];
int f[205];
int work(int x)
{
    for(int i=1;i<=10;i++)
    {
        for(int j=0;j<(1<<i);j++)
        {
            string temp;
            for(int k=0;k<i;k++)
            {
                if((j>>k)&1) temp+='1';
                else temp+='0';
            }
            if(s[x].find(temp)==-1) return i-1;
        }
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++) {cin>>s[i];f[i]=work(i);}
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        int a,b;
        cin>>a>>b;
        s[++n]=s[a]+s[b];
        int len=s[n].length();
        if(len>1000) s[n]=s[n].substr(0,500)+s[n].substr(len-500,500);
        f[n]=work(n);
        f[n]=max(max(f[n],f[a]),f[b]);
        cout<<f[n]<<endl;
    }
    return 0;
}