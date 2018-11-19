// Example program
#include <bits/stdc++.h>
using namespace std;
bool flag=false;
bool flago=false;
bool flagt=false;
long long n;
string s;
string a[101];
int main()
{
    cin>>s; cin>>n;
    for(long long i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i][0]==s[0] && a[i][1]==s[1])
            flag=true;
        if(a[i][0]==s[1] && a[i][1]==s[0])
            flag=true;
        if(a[i][1]==s[0])
            flago=true;
        if(a[i][0]==s[1])
            flagt=true;
    }
    if(flago==true && flagt==true)
        flag=true;
    if(flag==true)
        cout<<"YES";
    else cout<<"NO";
}
