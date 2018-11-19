#include <bits/stdc++.h>
#define fto(i,x,y) for (int i=(x); i <= (y); ++i)
#define fdto(i,x,y) for (int i=(x); i >= (y); --i)
#define pb push_back
#define mp make_pair
#define ii pair<int, int>
#define vi vector<int>
#define fi first
#define se second
#define ll long long
#define oo 1000000007
#define MOD 111539786
#define maxN 300

using namespace std;

int n;
string s,ss[105];
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    cin>>s;
    cin>>n;
    fto(i,1,n) {
        cin>>ss[i];
        if (ss[i] == s) {
            cout<<"YES";
            return 0;
        }
    }
    fto (i,1,n) {
        if (s[0] == ss[i][1]) {
            fto(j,1,n) {
                if (s[1] == ss[j][0]) {
                    cout<<"YES";
                    return 0;
                }
            }
        }
    }
    cout<<"NO";
}
