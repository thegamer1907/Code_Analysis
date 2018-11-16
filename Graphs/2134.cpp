#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0);
    ll n, m;
    cin >> n >> m;
    queue<ll> Q;
    map<ll, ll> R;
    map<ll, ll> PREV;
    Q.push(n);
    R[n]=0;
    while(R.count(m)==false){
        ll s = Q.front();
        Q.pop();
        if(s!=n){
            R[s]=R[PREV[s]]+1;
        }
        if(s<=m&&PREV.count(s*2)==false){
            Q.push(s*2);
            PREV[s*2]=s;
        }
        if(s-1>0){
            if(PREV.count(s-1)==false){
                Q.push(s-1);
                PREV[s-1]=s;
            }
        }
    }
    cout << R[m] << endl;
}
