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
bool b[100];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int n , k;
    cin >> n >> k;
    for(int i = 0 ; i < n ; i ++ ){
        int num = 0;
        for(int j = 0 ; j < k ; j ++ ){
            int x ;
            cin >> x;
            num *= 2;
            num += x ;
        }
        if(num == 0){
            cout << "YES";
            return 0;
        }
        b[num] = true ;
        for(int num2 = 0 ; num2 < (1 << k) ; num2 ++ ){
            bool flag = true;
            for(int p = 0 ; p < k ; p ++ ){
                if((num & (1 << p)) && (num2 & (1 << p))){
                    flag = false;
                }
            }
            if(flag){
                if(b[num2]){
                    cout << "YES";
                    return 0;
                }
            }

        }
    }
    cout << "NO";
    return 0;
}
