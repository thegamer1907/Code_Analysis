#include "bits/stdc++.h"
using namespace std;
typedef long long int LL;
typedef pair<int,int> pii;
#define forn(i,n) for(int (i) = 0; (i) < (n); (i)++)
const int N= 200005;
string s;
int n[3], p[3], ham[3];
LL money;
bool afford(LL num){
    LL need = 0;
    for(int i = 0; i < 3; i ++){
        need += p[i] * max(0LL, ham[i] * num - n[i]);
    }
    return need <= money;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cin >> s;
    for(int i = 0; i < 3; i ++)
        cin >> n[i];
    for(int i = 0; i < 3; i ++)
        cin >> p[i];
    cin >> money;
    for(int i = 0; i < s.length(); i ++){
        if(s[i] == 'B')
            ham[0]++;
        else if(s[i] == 'S')
            ham[1]++;
        else
            ham[2]++;
    }
    LL lo = 0, hi = (LL)1e13;
    while(lo + 1< hi){
        LL mid = (lo + hi) / 2;
        if(afford(mid))
            lo = mid;
        else
            hi = mid;
    }
    cout<< lo<<endl;
    return 0;
}