#include <bits/stdc++.h>

#define f cin
#define g cout
#define ll long long
using namespace std;
//ifstream f("d.in");
//ofstream g("d.out");

const ll NMax = 103;

char SW[NMax];
ll B,S,C,PB,PS,PC,R,B_total,S_total,C_total;

ll valid(ll k){
    ll need_B = max(0LL,k * B_total - B);
    ll need_S = max(0LL,k * S_total - S);
    ll need_C = max(0LL,k * C_total - C);
    if(need_B * PB + need_C * PC + need_S * PS > R)
        return 0;
    return 1;
}
ll BinarySearch(ll lo, ll hi){
    ll mid = (lo + hi) / 2;
    while(lo <= hi){
        mid = (lo + hi) / 2;
        ll ok1 = valid(mid);
        ll ok2 = valid(mid + 1);
        if(ok1 == 1 && ok2 == 0){
            return mid;
        }else
        if(ok1 == 1){
            lo = mid + 1;
        }else
        if(ok2 == 0){
            hi = mid - 1;
        }
    }
    return 0;
}
int main(){
    scanf("%s",SW);
    ll l = strlen(SW);
    for(ll i = 0; i < l; ++i){
        if(SW[i] == 'B'){
            B_total ++;
        }else
        if(SW[i] == 'S'){
            S_total ++;
        }else
        if(SW[i] == 'C'){
            C_total ++;
        }
    }
    scanf("%I64d%I64d%I64d",&B,&S,&C);
    scanf("%I64d%I64d%I64d",&PB,&PS,&PC);
    scanf("%I64d",&R);
    printf("%I64d",BinarySearch(0,10000000000003));
    return 0;
}
