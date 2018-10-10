#include<bits/stdc++.h>
using namespace std;
char s[1000005];
int next1[1000005];
int cnt[1000005];
int n;
void getnext()
{
    next1[0]=0;
    next1[1]=0;
    for(int i=1;i<n;i++)
    {
        int j=next1[i];
        while(j&&s[j]!=s[i]) j=next1[j];
        next1[i+1]=(s[j]==s[i])?(j+1):0;
    }
}
int main()
{
    cin>>s;
    n=strlen(s);
    getnext();
    for(int i=1;i<=n;i++) cnt[next1[i]]++;
    for(int i=n;i>=1;i--)
    {
        int pre=next1[i];
        if(pre)
        {
            cnt[pre]+=cnt[i];
        }
    }
    int i=n;
    while(i)
    {
        if(cnt[i]>=2)
        {
            for(int j=0;j<i;j++) cout<<s[j];
            cout<<endl;
            return 0;
        }
        i=next1[i];
    }
    cout<<"Just a legend"<<endl;
    return 0;
}