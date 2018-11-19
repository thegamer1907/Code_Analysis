#include<bits/stdc++.h>
using namespace std;

int hr,mt,sc,t1,t2;
double hand[3],s,t;

int main(){
    cin >> hr >> mt >> sc >> t1 >> t2;
    hand[0] = 1.0*hr/12 + 1.0*mt/60/12 + 1.0*sc/3600/12;
    hand[1] = 1.0*mt/60 + 1.0*sc/3600;
    hand[2] = 1.0*sc/60;
    sort(hand,hand+3);
    s = min(t1,t2) / 12.0;
    t = max(t1,t2) / 12.0;
    int p = lower_bound(hand,hand+3,s) - hand;
    int q = lower_bound(hand,hand+3,t) - hand;

    if(p == q || p + 3 == q) puts("YES");
    else puts("NO");

    return 0;
}