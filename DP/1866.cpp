#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ldb;
typedef vector<ll> vll;

#define pb push_back
#define mpr make_pair
#define tc ll testcase; cin>>testcase; while(testcase--)
#define fast_io() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define l(x)                     cout <<"lol"<<x<<"\n";
#define trace1(x)                cout <<#x<<":"<<x<< endl;
#define trace2(x, y)             cout <<#x<<":"<<x<<" | "<<#y<<":"<<y<< endl;
#define trace3(x, y, z)          cout <<#x<<":"<<x<<" | "<<#y<<":"<<y<<" | "<<#z<<":"<<z<<endl;
#define trace4(a, b, c, d)       cout <<#a<<":"<<a<<" | "<<#b<<":"<<b<<" | "<<#c<<":"<<c<<" | "<<#d<<":"<<d<<endl;

const ll mod = 1e9+7;
const ldb PI = acos(-1);

ll POWER[65];
void precompute() {POWER[0]=1; for(int i=1;i<63;i++) POWER[i]=POWER[i-1]<<1LL; }
ll fastMul(ll a,ll b,ll mod){ll res = 0; a %= mod; while (b){   if (b & 1){res = (res + a) % mod;} a = (2 * a) % mod; b >>= 1;} return res;}
ll power(ll x,ll y,ll mod2) {ll res=1; x%=mod2; while(y) {if(y&1) res=fastMul(res,x,mod2); y>>=1; x=fastMul(x,x,mod2); }return res;}
ll inv(ll x,ll mod){return power(x,mod-2,mod);}

/*
    freopen("testfile.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
*/

vector<int> calcZ(string s)
{
    int l = 0;
    int r = 0;
    vector<int> Z(s.size()+1,0);

    for(int k=1;k<s.size();k++)
    {
        if(k > r)
        {
            l = r = k;
            while(r < s.size() && s[r] == s[r-l])
            {
                r++;
            }
            Z[k] = r-l;
            r--;
        }
        else
        {
            int k1 = k-l;
            if(Z[k1] < r - k + 1)
                Z[k] = Z[k1];
            else
            {
                l = k;
                while(r < s.size() && s[r] == s[r-l])
                {
                    r++;
                }
                Z[k] = r-l;
                r--;
            }
        }
    }

    return Z;

}
int main()
{
    string s,pat;
    cin >> s;
    pat = "AB";
    string s1 = pat + '$' +s;   // character that is not present in strings
    vector<int> Z = calcZ(s1),v ;

    for(int i=0;i<Z.size();i++)
    {
        if(Z[i] == pat.size())
            v.push_back(i-pat.size()-1);
    }

    pat = "BA";
    string s2 = pat + '$' +s;   // character that is not present in strings
    vector<int> Z1 = calcZ(s2),v1 ;

    for(int i=0;i<Z1.size();i++)
    {
        if(Z1[i] == pat.size())
            v1.push_back(i-pat.size()-1);
    }

    if(v.size() > 0 && v1.size() > 0 && (abs(v[0] - v1[v1.size()-1]) >= 2 || abs(v[v.size()-1]-v1[0]) >= 2))
        cout << "YES" << "\n";
    else
        cout << "NO" << "\n";
    return 0;
}
