#include<bits/stdc++.h>
using namespace std;
long long a,b,h,m,s;
bool check(long long k)
{
    if(a<k&&k<b)return true;
    else return false;
}
int main()
{
    cin>>h>>m>>s>>a>>b;
    if(a==12)a=0;
    else a*=5000000000ll;
    if(b==12)b=0;
    else b*=5000000000ll;
    if(h==12)h=0;
    else h*=5000000000ll;
    s*=1000000000ll;
    m*=1000000000ll;
    m+=s/60;
    h+=m/12;
    if(a>b)swap(a,b);
    if(check(m)&&check(h)&&check(s)){cout<<"YES";exit(0);}
    if(!check(m)&&!check(h)&&!check(s)){cout<<"YES";exit(0);}
    cout<<"NO";
}
