#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n,t,p;
    cin>>n>>t;
    string s;
    cin>>s;
    for(;t!=0;t--)
    for(int i=0;i<n-1&&t!=0;i++)
    {
        if(s[i]==66&&s[i+1]==71)
        {
            swap(s[i],s[i+1]);
            i+=1;
        }
    }
    cout<<s;
    return 0;
}
