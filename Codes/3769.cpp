#include <bits/stdc++.h>
#define ll long long
using namespace std;

int b,s,c;
int nb,ns,nc;
int pb,ps,pc;
ll r;

bool check(ll x)
{
    ll db,ds,dc;
    db = b*x;
    ds = s*x;
    dc = c*x;

    db -= nb;
    dc -= nc;
    ds -= ns;

    if (db < 0) db = 0;
    if (dc < 0) dc = 0;
    if (ds < 0) ds = 0;

    db *= pb;
    dc *= pc;
    ds *= ps;
    //cout << ds << endl;
    return (db+dc+ds) <= r;
}

int main()
{
    ios::sync_with_stdio(0);
    string st;
    cin >> st;
    b=c=s=0;
    for (int i = 0 ; i < st.size() ; i++)
    {
        if (st[i] == 'B') b++;
        else if (st[i] == 'S') s++;
        else if (st[i] == 'C') c++;
    }
    cin >> nb >> ns >> nc >> pb >> ps >> pc >> r;

    ll lo = 0,hi = 1e13,mid;
    while(lo < hi-1)
    {
        mid = (lo+hi)/2;
        //cout << lo << ' ' << hi << ' ' << mid << endl;
        if (check(mid)) lo = mid;
        else hi = mid-1;
    }
    if (check(hi)) lo = hi;
    cout << lo << endl;
    return 0;
}
