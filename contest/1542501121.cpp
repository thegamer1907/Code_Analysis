#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int ans=0;
    float h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    m=m+s/60*1.0;
    h=h+m/60*1.0;
    s=s*12/60;
    m=m*12/60;
    if(t1>t2)
        swap(t1,t2);
    if(h>=t1&&h<=t2)
        ans++;
    if(m>=t1&&m<=t2)
        ans++;
    if(s>=t1&&s<=t2)
        ans++;
    if(!ans||ans==3)
        cout << "YES";
    else
        cout << "NO";
}