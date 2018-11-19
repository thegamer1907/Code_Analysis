#include <bits/stdc++.h>
#define re return
#define ull unsigned long long
#define ll long long
#define ld long double
#define mid (l+r)/2
#define f first
#define s second
#define oo 1e9
#define pi acos(-1)
#define OO 4e18
#define EPS 1e-12
#define FX(n) fixed<<setprecision(n)
#define mm(o,k) memset(o,k,sizeof o)
#define Hossam_Yehia ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
using namespace std;
string s,k;
int n;
map<char,int> mp,mp2;
int main(){
    Hossam_Yehia;
    cin >> s >> n;
    while(n--){
        cin >> k;
        if(s==k)exit(puts("YES"));
        mp[k[1]]=true;
        mp2[k[0]]=true;
    }
    if(mp[s[0]]&&mp2[s[1]])exit(puts("YES"));
    cout<<"NO";
    re 0;
}