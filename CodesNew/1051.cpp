#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,m;
cin>>n>>m;
set<string>s;
string ss;
for(int i=0;i<n;i++)
{
cin>>ss;
s.insert(ss);
}

for(int i=0;i<m;i++)
{
cin>>ss;
s.insert(ss);
}
long int size=s.size();
int tmp=m+n-size;
if(tmp==0 || tmp%2==0)
{
    if(n>m)
        cout<<"YES";
    else
        cout<<"NO";
}
if(tmp%2!=0)
{
    m=m-1;
    if(n>m)
        cout<<"YES";
    else
        cout<<"NO";
}


}
