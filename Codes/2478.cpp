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
long long ara[10000005], ara2[10000005], ara3[10000005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;
set <char> st;
map <long long, long long> dat;
queue <long long> q[200005];

void seive(){
    for(long long i=2;i<=10000000;i++){
        if(!ara[i]){
            for(long long j=i;j<=10000000;j+=i){
                ara[j] = 1;
                ara3[i]+=ara2[j];
            }
        }
    }
    for(long long i=2;i<=10000000;i++){
        ara3[i] += ara3[i-1];
    }
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, f;
    cin >> n;
    memset(ara, 0, sizeof ara);
    memset(ara2, 0, sizeof ara2);
    memset(ara3, 0, sizeof ara3);
    for(i=0;i<n;i++){
        cin >> a;
        ara2[a]++;
    }
    seive();
    cin >> m;
    c = 10000000;
    while(m--){
        cin >> a >> b;
        if(a>c){
            cout << 0 << endl;
            continue;
        }
        b = min(b, c);
        cout << ara3[b] - ara3[a-1] << endl;
    }
    return 0;
}















