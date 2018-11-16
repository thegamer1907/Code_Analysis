#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,i,l,r;
    string s;
    cin>>s;
    vector<int> v(s.size()+1);
    for(i=0;i<s.size()-1;i++)
    {
    if(s[i]==s[i+1])
    v[i+1]=v[i]+1;
    else
    v[i+1]=v[i];
    }
    cin>>m;
    while(m--)
    {
        cin>>l>>r;
        cout<<v[r-1]-v[l-1]<<endl;
    }
}