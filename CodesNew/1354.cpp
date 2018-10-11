#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#define ll long long
#define FOR(i,n) for(int i=0; i<n; i++)
#define m_p make_pair
using namespace std;

int min(int a, int b, int c)
{
    int minimum = a;
    if(b<minimum)
        minimum = b;
    if(c<minimum)
        minimum = c;
    return minimum;
}

int main()
{
    string str;
    cin >> str;
    int b, s, c;
    b=0;
    s=0;
    c=0;
    FOR(i,str.length())
    {
        if(str[i]=='B')
            b++;
        else if(str[i]=='S')
            s++;
        else if(str[i]=='C')
            c++;
    }
    ll ans = 0;
    int nb, nc, ns;
    int pb, pc, ps;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    ll r;
    cin >> r;
    int x,y,z;
    if(b!=0)
        x = nb/b;
    else
        x=INT_MAX;
    if(c!=0)
        y = nc/c;
    else
        y = INT_MAX;
    if(s!=0)
        z = ns/s;
    else
        z = INT_MAX;
    ans += min(x, y, z);
    if(b==0)
        nb = 0;
    if(c==0)
        nc = 0;
    if(s==0)
        ns = 0;
    nb = nb - b*ans;
    nc = nc - c*ans;
    ns = ns - s*ans;
    while((nb!=0 || nc!=0 || ns!=0) && r>0)
    {
        if(nb>=b)
            nb = nb-b;
        else
        {
            r = r - pb*(b-nb);
            nb = 0;
        }
        if(nc>=c)
            nc = nc-c;
        else
        {
            r = r- pc*(c-nc);
            nc = 0;
        }
        if(ns>=s)
            ns = ns - s;
        else
        {
            r = r- ps*(s-ns);
            ns = 0;
        }
        ans++;
    }
    int price = pb*b + ps*s + pc*c;
    if(r>0)
        ans+=r/price;
    else if(r<0)
        ans--;
    cout << ans << endl;
}
