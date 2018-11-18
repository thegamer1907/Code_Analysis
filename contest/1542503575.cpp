#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main()
{
    string s;
    int n,a=0,b=0;
    cin>>s>>n;
    string ss[n];
    for(int i=0;i<n;i++)
    {
        cin>>ss[i];
        if(s==ss[i]) {a=1;b=1;}
    }

    for(int i=0;i<n;i++)
    {
        if(s[0]==ss[i][1]) a=1;
    }
    for(int i=0;i<n;i++)
    {
        if(s[1]==ss[i][0]) b=1;
    }

    if(a==1 && b==1) cout<<"YES";
    else cout<<"NO";


    return 0;
}
