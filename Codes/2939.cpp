#include <iostream>

using namespace std;
string s;

int pre[1000004];

bool check(int n,int k)
{
    int i;
    for(i=0;i<n-1;i++)
        if(pre[i]==k)
            return true;
    return false;
}
int main()
{
    cin>>s;
    int i;
    int pos=0;
    pre[0]=0;
    int n =s.size();
    for(i=1;i<s.size();)
    {
        if(s[i]==s[pos])
            pre[i]=++pos,i++;
        else if(pos!=0)
            pos = pre[pos-1];
        else
            pre[i]=0,i++;
    }

    if(pre[n-1]==0)
        cout<<"Just a legend"<<"\n";
    else if(check(n,pre[n-1]))
        cout<<s.substr(0,pre[n-1])<<"\n";
    else if(pre[pre[n-1]-1]==0)
        cout<<"Just a legend"<<"\n";
    else
        cout<<s.substr(0,pre[pre[n-1]-1])<<"\n";
    return 0;
}
