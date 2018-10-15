#include <bits/stdc++.h>

using namespace std;
int n;
string sir;
vector<string>s;
char c;
void binar(string mare,string mic,int pos)
{
    int st=0,ans=0;
    int dr=mic.size();
    int mid;
    if(mic<=mare)
        return;
        s[pos]="";
    while(st<dr)
    {
        mid=(st+dr)/2;
        string aux;
        aux.append(mic,0,mid);
        if(aux<=mare)
        {
            if(ans<mid)
            {
                ans=mid;
                s[pos]=aux;
            }
            st=mid+1;
        }
        else
            dr=mid;
    }
}
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>c;
        cin>>sir;
        s.push_back(sir);
    }
    for(int i=n-2;i>=0;i--)
        binar(s[i+1],s[i],i);
    for(int i=0;i<n;i++)
        cout<<c<<s[i]<<"\n";
    return 0;
}
