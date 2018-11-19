#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define fi first
#define se second
#define pb push_back
using namespace std;
int n;
string s, x;
bool us1['{'], us2['{'];
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >>s;
    cin >>n;
    bool o = 0;
    for (int i = 1; i <= n; ++i){
        cin >>x;us1[x[1]] = 1;
        us2[x[0]] = 1;
        if (x[0] == s[1] && us1[s[0]])o = 1;
        if (x[1] == s[0] && us2[s[1]])o = 1;

        if (x == s)o = 1;
    }
    if (o)cout <<"YES";else cout <<"NO";
}
