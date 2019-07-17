#include <bits/stdc++.h>
#define db(x) cout << (x) << '\n';
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    priority_queue <ll,vector<ll>,greater<ll>> pq;

    ll n,m,k;
    ll a;
    cin>>n>>m>>k;
    for(int i=0;i<m;i++)
    {
        cin>>a;
        pq.push(a);
    }
    int p,c=0,i=0,w=0;
    int q=k;
    while(!pq.empty())
    {
        while(pq.top()-i<=q && !pq.empty())
        {
            pq.pop();
            c++;
        }
        if(c==0)
        {
            q=(pq.top()-i-1)/k;
            q++;
            q*=k;
        }
        else
        w++;

        i+=c;
        c=0;
    }
    db(w)


    return 0;
}