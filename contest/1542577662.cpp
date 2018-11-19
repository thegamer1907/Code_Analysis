#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    if(h == 12)h = 0;
    else h = h * 5;
    if(t1 == 12)t1 = 0;
    else t1 = t1 * 5;
    if(t2 == 12)t2 = 0;
    else t2 = t2 * 5;
    int mn = min(t1,t2);
    int mx = max(t1,t2);
    int c = 0;
    for(int i = mn ; i != mx ; i = ++i % 60)
    {
        if(i == h)c++;
        if(i == m)c++;
        if(i == s)c++;
    }
    if(c == 0 || c == 3)cout<<"YES\n";
    else cout<<"NO\n";
}
