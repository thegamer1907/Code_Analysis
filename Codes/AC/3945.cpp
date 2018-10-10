// In the name of Allah the Most Merciful.

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

string ar;
ll nb , ns , nc , pb ,ps , pc , r , rs , rc , rb;

bool is_possible(ll h)
{
    ll as = (h*rs);
    as = max(as-ns,(ll)0);
    as*=ps;

    ll ac = (h*rc);
    ac = max(ac-nc,(ll)0);
    ac*=pc;

    ll ab = (h*rb);
    ab = max(ab-nb,(ll)0);
    ab*=pb;

    if(as+ac+ab<=r)return true;
    return false;

}

int main(void)
{
    cin >> ar >> nb >> ns >> nc >> pb >> ps >> pc >> r;

    int si = ar.size();
    rb = rs = rc = 0;

    for(int i=0;i<si;i++){

        if(ar[i]=='S')rs++;
        if(ar[i]=='B')rb++;
        if(ar[i]=='C')rc++;
    }

    ll hi = 1234567891011 , low = 0 , mid , t = 200 , ans = -1;

    while(t--){

        mid = (hi+low)/2;

        if(is_possible(mid)==true){

            low = mid+1;
            ans = mid;
        }
        else{
            hi = mid-1;
        }
    }

    if(ans==-1)cout << 0 << endl;
    else cout << ans << endl;

    return 0;
}
