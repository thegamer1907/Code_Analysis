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
long long ara[200005], S, C, B, a, b, c, r, aB, aS, aC, pB, pS, pC;
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
set <char> st;
map <long long, long long> dat;
queue <long long> q[200005];

long long check(long long bur){
    long long rs = bur*S;
    long long rb = bur*B;
    long long rc = bur*C;
    long long temp = r;
    if(rs>aS) temp -= (rs-aS)*pS;
    if(rb>aB) temp -= (rb-aB)*pB;
    if(rc>aC) temp -= (rc-aC)*pC;
    return temp;
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, mx, d, k, l, f;
    cin >> str;
    cin >> aB >> aS >> aC >> pB >> pS >> pC >> r;
    S = C = B = 0;
    for(l=0;l<str.length();l++){
        if(str[l]=='B') B++;
        if(str[l]=='S') S++;
        if(str[l]=='C') C++;
    }
    l = 0;
    h = 2000000000010;
    while(l<h){
        m = (l+h)/2;
        if(check(m)>=0) l = m+1;
        else h = m;

    }
    cout << l-1;
    return 0;
}







