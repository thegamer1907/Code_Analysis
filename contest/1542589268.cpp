#include <bits/stdc++.h>

using namespace std;
#define F first
#define S second
#define sz size()
#define m_p make_pair
#define pb push_back
#define ll long long
#define ldo long double
#define n_p next_permutation
#define ios ios_base::sync_with_stdio(0)

const ll AV = 1e16;
const ll AB = 1e9 + 7;
const ll AC = 1e6 + 1;
const ll AN = 1e5 + 1;
const ll AP = 1e4 + 1;

ll n , y = 0 ,x = 0 , z= 0;
string s;
int main() {
    cin >> s >> n;
    for(int i = 1; i <= n; i++) {
        string s1;
        cin >> s1;
        if(s1 == s) 
        {
            cout << "YES";
            return 0;
        }
        if(s[0] == s1[1]) 
        {
            y = 1;
        }
        if(s[1] == s1[0])
        {z = 1;
        }
    }
    if(y && z) 
    {
        cout << "YES";
        return 0;
   }
   cout << "NO";
   return 0;
}