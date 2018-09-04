#include <bits/stdc++.h>
#define LL long long
using namespace std;
LL n, d, c, mid;
bool ok(LL k){
    LL candy=n, sum=0, eat;
    while (candy>0){
        eat=min(candy,k);
        sum+=eat;
        candy-=eat;
        candy-=(candy/10); 
    }
    return n<=sum*2;
}
int main(){
    cin>>n;
    d=1;
    c=n;
    while (d<c){
        mid = (d+c)/2;
        if (ok(mid)) c=mid;
        else d=mid+1;
    }
    cout<<d;
}