#include <iostream>
#include <cstring>
#include <algorithm>
#include <vector>
#include <tuple>
#include <queue>
#include <map>
using namespace std;
using lint = long long;

lint N;

lint eat(lint k) {
    lint amount = N;
    lint mine = 0;
    while(amount) {
        mine += min(amount, k);
        amount -= min(amount, k);
        amount -= amount / 10;
    }
    return mine;
}

int main() {
    ios_base::sync_with_stdio(0);cin.tie(0);

    cin>>N;
    lint bot = 0, top = N+1, m;
    while(bot < top-1) {
        m = (bot + top) / 2;
        if(eat(m) >= (N+1)/2) top = m;
        else bot = m;
    }

    cout<<top<<'\n';

    return 0;
}