#include <bits/stdc++.h>
#define mp make_pair
#define pb push_back

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef long double ld;
typedef map<pii,set<pii> >::iterator mapit;
typedef multiset<ll>::iterator setit;

const int maxn = 1e6 + 5;
const int maxlog = 22;
const ll mod = 1e9 + 7;
const int sq = 340;
const int inf = 1e9 + 43;
const ld pi = 3.14159265;
string s[maxn];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    string p;
    cin >> p;
    int n ;
    cin >> n;
    for(int i = 0 ; i < n ; i ++ ){
        cin >> s[i];
    }
    for(int i = 0 ; i < n ; i ++ ){
        for(int j = 0 ; j < n ; j ++ ){
            string t = s[i] + s[j];
            for(int k = 0 ; k < 3 ; k ++ ){
                if(t[k] == p[0] && t[k + 1] == p[1]){
                    cout << "YES";
                    return 0;
                }
            }
        }
    }
    cout << "NO";
    return 0;
}
