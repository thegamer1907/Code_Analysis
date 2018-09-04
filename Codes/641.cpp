#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <cmath>
#include <stack>
#include <map>
#include <queue>
#include <cstdio>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;

#define all(x) (x).begin(),(x).end()
#define pb(x) push_back(x)
#define INF 1000000001
#define pi 3.1415926535897932384626433832795
#define INPUT "input.txt"
#define OUTPUT "output.txt"

bool check(int n){
    int res=0;
    while (n>0){
        res+=n%10;
        n/=10;
    }
    return res==10;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cout.setf(ios::fixed);
    cout.precision(16);
    //freopen(INPUT,"r",stdin);
    //freopen(OUTPUT,"w",stdout);
    int k,i=1,cnt=0;
    cin >> k;
    while (1){
        if (check(i)) cnt++;
        if (cnt==k) break;
        i++;
    }
    cout << i;
}