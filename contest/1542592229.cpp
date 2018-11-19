#include <iostream>
#include <iomanip>
#include <climits>
#include <stack>
#include <fstream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <string>
#include <vector>
#include <deque>
#include <queue>
#include <set>
#include <map>
#include <cassert>

#define FOR(i,n) for(int i=0,_n=n;i<_n;i++)
#define FORR(i,s,n) for(int i=s,_n=n;i<_n;i++)
#define mp make_pair
#define pb push_back
#define pii pair<int,int>
#define pli pair<ll,int>
#define vi vector<int>
#define fs first
#define sec second

#define maxn 100000

using namespace std;
typedef long long ll;

const ll MOD = 1000000007LL;

vector <string> s;
int main(){
    int n;
    string gesl;
    cin >> gesl;
    cin >> n;
    FOR(i,n){
        string curr;
        cin >> curr;
        if(curr==gesl){cout << "YES\n";return 0;}
        s.pb(curr);
        s.pb(curr);
    }
    FOR(i,s.size())FOR(j,s.size()){
        if(i!=j && s[i][1]==gesl[0] && s[j][0]==gesl[1]){
            cout << "YES\n";return 0;
        }
    }
    cout << "NO\n";
	return 0;
}
