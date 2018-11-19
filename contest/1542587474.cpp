#include <bits/stdc++.h>
using namespace std;
map<int,int>m;
set<int>s;
pair<int,int>p;
int n,x,y,c,k=10;

int main()
{
    string a[1000];

string g,v;
cin>>g;
cin>>n;
for(int q=0;q<n;q++)
    cin>>a[q];
while(k--)
{
for(int i=0;i<n;i++)
{
        v=a[i];
        if (v[0]==g[0]&&v[1]==g[1])
        {
            cout<<"YES";
            return 0;
        }
        if(v[1]==g[0]&&x==0)
        {
            c++;
            x++;
        }
        if(v[0]==g[1]&&y==0)
        {
            c++;
            y++;
        }
        if(c==2)
        {
            cout<<"YES";
            return 0;
        }



}
}
cout<<"NO";
    return 0;
}
