//prince_of_crows
//revolution_for_redemption
//BUET_Mushroom

/*This is beginning to feel like the long
winded blues of the never
Barely controlled locomotive consuming the picture
and blowing the crows, the smoke

This is beginning to feel like the long
winded blues of the never
Static explosion devoted to crushing the broken
and shoving their souls to ghost

Eternalised. Objectified.
You set your sights so high.
But this is beginning to feel like
the bolt busted loose from the lever

Never mind
Death professor
Your structure's fine
My dust is better
Your victim flies so high
All to catch a bird's eye view of who's next*/

#include <bits/stdc++.h>

using namespace std;

string star[200000], str, str1;
long long ara[200005], ara2[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
map <string, long long> p1;
map <string, long long> p2;
vector <string> p1s;
vector <string> p2s;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l;
    cin >> n >> m;
    for(i=0;i<n;i++){
        cin >> str;
        p1[str] = 1;
        p1s.push_back(str);
    }
    for(i=0;i<m;i++){
        cin >> str;
        p2[str] = 1;
        p2s.push_back(str);
    }
    a = b = c = 0;
    for(i=0;i<n;i++){
        if(p2[p1s[i]]) b++;
        else a++;
    }
    for(i=0;i<m;i++){
        if(!(p1[p2s[i]])) c++;
    }
    c += b/2;
    a += b/2 + (bool)(b%2);
    if(a>c) cout << "YES";
    else cout << "NO";
    return 0;
}













