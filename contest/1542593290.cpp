/*
*/
#include <bits/stdc++.h>
using namespace std;

#define f1 first
#define s2 second
#define pii pair<int,int>
#define ppi pair<pii,int>
#define pip pair<int,pii>
#define ppp pair<pii,pii>
#define ll long long
#define pll pair<ll,ll>
#define ppl pair<pll,ll>
#define plp pair<ll,pll>
#define res reserve
#define ins insert
#define mp make_pair
#define pb push_back
#define vec vector
#define INF_MAX (0x7fffffff)
#define INF_MIN (0x80000000);
#define lp(x, y, z, q) for(int x=y; x<=z; x+=q)

int main(){
    //fre
    //fre
    string st;
    cin >> st;
    int n;
    cin >> n;
    bool ans=0;
    bool en=0;
    bool star=0;
    int i;
    for(i=0; !ans && (!en || !star) && i<n; i++){
        string bark;
        cin >> bark;
        if(bark==st)
            ans=1;
        if(bark[0]==st[1])
            en=1;
        if(bark[1]==st[0])
            star=1;
    }
    while(i<n){
        string temp;
        cin >> temp;
        i++;
    }
    if(ans)
        cout << "YES\n";
    else if(en && star)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
