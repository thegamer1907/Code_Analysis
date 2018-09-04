#include <bits/stdc++.h>

#define f cin
#define g cout
#define ll long long
using namespace std;

const ll NMax = 1e6 + 3;

const ll mod1 = 666013;
const ll prim1 = 3;
const ll mod2 = 1e9 + 7;
const ll prim2 = 73;

const ll SIGMA = 130;

ll ok,ans;
ll Pow[NMax],Pow2[NMax];
ll hash1[NMax],hash2[NMax];
string x,y;
vector<int> v[SIGMA];

int main()
{
    f >> x;
    ll n = x.size();
    ll nr = 0;

    Pow[0] = 1;
    Pow2[0] = 1;
    for(int i = 1; i < n; ++i){
        Pow[i] = Pow[i - 1] * prim1;
        Pow[i] %= mod1;

        Pow2[i] = Pow2[i - 1] * prim2;
        Pow2[i] %= mod2;
    }

    for(ll i = 0; i < n; ++i){
        if(i != n - 1)
            v[x[i]].push_back(i);

        if(i == 0){
            hash1[i] = x[i] - 'a';
            hash2[i] = x[i] - 'a';
        }else{
            hash1[i] = hash1[i - 1] * prim1 + x[i] - 'a';
            hash1[i] %= mod1;

            hash2[i] = hash2[i - 1] * prim2 + x[i] - 'a';
            hash2[i] %= mod2;
        }
    }
    int ans = -1;
    for(int i = n - 2; i >= 0; --i){
        ll HAS = hash1[i];
        ll HAS2 = hash2[i];

        ///hash final
        ll has = 0;
        has = (hash1[n - 1] - (hash1[n - (i + 2)] * Pow[i + 1]) % mod1 + mod1) % mod1;
        ll hass = 0;
        hass = (hash2[n - 1] - (hash2[n - (i + 2)] * Pow2[i + 1]) % mod2 + mod2) % mod2;

        if(HAS == has && hass == HAS2){
            ll len = i + 1;

            for(int j = 0; j < v[x[i]].size(); ++j){
                int poz2 = v[x[i]][j];
                if(poz2 > i){
                    ll has2 = 0;
                    has2 = (hash1[poz2] - (hash1[poz2 + 1 - (i + 2)] * Pow[i + 1]) % mod1 + mod1) % mod1;

                    ll hass2 = 0;
                    hass2 = (hash2[poz2] - (hash2[poz2 + 1 - (i + 2)] * Pow2[i + 1]) % mod2 + mod2) % mod2;

                    if(has2 == HAS && hass2 == HAS2){
                        for(int k = 0; k <= i; ++k){
                            g << x[k];
                        }
                        return 0;
                    }
                }
            }
        }
    }
    g << "Just a legend" << '\n';
    return 0;
}
