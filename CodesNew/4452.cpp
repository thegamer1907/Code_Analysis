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
typedef vector<int> vi;

#define all(x) (x).begin(),(x).end()
#define pb(x) push_back(x)
#define INF 1000000001
#define LLINF 1000000000000000001
#define INPUT "input.txt"
#define OUTPUT "output.txt"

string x[500001];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen(INPUT,"r",stdin);
    //freopen(OUTPUT,"w",stdout);
    int n;
    cin >> n;
    for (int i=1;i<=n;i++) cin >> x[i];
    for (int i=n;i>1;i--){
        bool flag=false;
        for (int j=0;j<min(x[i].length(),x[i-1].length());j++){
            if (x[i-1][j]<x[i][j]){
                flag=true;
                break;
            }
            else if (x[i-1][j]>x[i][j]){
                x[i-1]=x[i-1].substr(0,j);
                flag=true;
                break;
            }
        }
        if (flag) continue;
        if (x[i-1].length()>x[i].length()) x[i-1]=x[i-1].substr(0,x[i].length());
    }
    for (int i=1;i<=n;i++) cout << x[i] << "\n";
}