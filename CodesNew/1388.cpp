#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


ll nb,ns,nc;
ll pb,ps,pc;
ll r;

ll b,s,c;

bool ok(ll x){
    ll totalB = x * b;
    ll totalS = x * s;
    ll totalC = x * c;

    totalB -= min(totalB, nb);
    totalS -= min(totalS, ns);
    totalC -= min(totalC, nc);

    ll cost = totalB * pb + totalS * ps + totalC * pc;

    return cost <= r;
}

int main() {

    string str; cin>>str;
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>r;

    for(auto x:str)
        if(x=='B')b++;
        else if(x=='S')s++;
        else if(x=='C')c++;


    ll st = 0, en = 1e14;
    while(st != en){
        ll mid = (st+en)/2;

        if(ok(mid))
            st = mid + 1;
        else
            en = mid;

    }

    cout<<st - 1;
}













