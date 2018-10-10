/*
This program is brought to you by: tsu_

Mother said,I will never be able to program,look at me now,I am green rated on Codeforces..

*/
#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> ii;
typedef long long ll;
typedef vector<ll> vll;
#define sz(a) int((a).size())
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define tr(c,i) for(typeof((c).begin() i = (c).begin(); i != (c).end(); i++)
#define present(c,x) ((c).find(x) != (c).end())
#define cpresent(c,x) (find(all(c),x) != (c).end())
#define F first
#define S second
#define mp make_pair
#define SIZE 100000 + 1
#define MOD 1000000007
string rec;
ll n[3];
ll p[3];
ll r;
ll nur[3];
bool canbuy(ll x)
{
    ll p1 = max((ll)0,x*nur[0] - n[0]); ll p2 = max((ll)0,x*nur[1] - n[1]); ll p3 = max((ll)0,x*nur[2] - n[2]);
    return (p1*p[0] + p2*p[1] + p3*p[2]) <= r;
}
ll bs()
{
    ll hi = 1e14;
    ll lo = 0;
    while(hi > lo)
    {
        ll mid = lo + (hi - lo + 1)/2;
        if(canbuy(mid)) lo = mid;
        else hi = mid - 1;
    }
    return hi;
}
int main()
{
    cin >> rec;
    for(int i=0;i<rec.size();i++)
    {
        if(rec[i] == 'B')
        {
            nur[0]++;
        }else if(rec[i] == 'S')
        {
            nur[1]++;
        }else
        {
            nur[2]++;
        }
    }
    for(int i=0;i<3;i++) cin >> n[i];
    for(int i=0;i<3;i++) cin >> p[i];
    cin >> r;
    cout << bs() << endl;
    return 0;
}
