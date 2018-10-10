#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
#define MOD                 1000000007LL
#define EPS                 1e-9
#define io                  ios_base::sync_with_stdio(false);cin.tie(NULL);

const int MAXN = 1e6 + 5;

int n, k;

string s;
int solve(char c){
    int l = 0, r = -1, res = 0, change_done = 0;
    while(l < n){
        while(r < n && change_done <= k){
            if(s[r+1] == c){
                r++;
            }
            else{
                change_done++;
                r++;
            }
        }
        res = max(res, r-l);
        if(s[l] != c)
            change_done--;
        l++;
    }
    return res;
}

int main(){
    io;
    cin >> n >> k;
    cin >> s;
    s += " ";
    int res1 = solve('a');
    int res2 = solve('b');
    cout << max(res1, res2) << endl;
    return 0;
}