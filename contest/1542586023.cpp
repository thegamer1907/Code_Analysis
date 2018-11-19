#include<bits/stdc++.h>
using namespace std;
string s,x[101];
map<string,long long>m;
long long n,i,c[26],j;
int main()
{   
    ios_base::sync_with_stdio(false);
    cin>>s>>n;
    for(i=0;i<n;i++)
    {
        cin>>x[i];
        m[x[i]]++;
    }
    long long flag=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(x[i][1]==s[0] && x[j][0]==s[1])
            {
                flag=1;
            }
        }
         
    }
    if(flag || m[s])
        cout<<"YES";
    else
        cout<<"NO";
}