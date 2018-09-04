#include <bits/stdc++.h>
typedef long long ll ;
using namespace std;


string st ;

ll nb , ns , nc ;
ll pb , ps , pc ;
ll r ;
map < char , ll > m ;

bool check(ll mid)
{
     ll b = max(0LL , mid * m['B'] - nb) ;
     ll s = max(0LL , mid * m['S'] - ns);
     ll c = max(0LL , mid * m['C'] - nc) ;
     //cout << b * pb + s * ps + c * pc  << endl ;
     return b * pb + s * ps + c * pc <= r ;
}

int main()
{
    ios::sync_with_stdio(false);


    string st ; cin >> st ;

    for(int i = 0 ; i < st.size() ; i++) m[st[i]]++ ;

    cin >> nb >> ns >> nc ;

    cin >> pb >> ps >> pc ;

    cin >> r ;


    ll low = 0 , high = 1e15 , res = 0 ;


    while(low <= high) {
           ll mid = (low + high) >> 1 ;

           if(check(mid))
               res = mid ,  low = mid + 1;
           else
               high = mid - 1;
    }

    cout << res << endl ;










    return 0;
}
