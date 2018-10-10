//price_of_crows
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
long long ara[200005];
vector < pair <long long, long long> > ab;
vector <long long> y;
vector <string> dat;
long long dp[10][10];

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, s, mid;
    cin >> n >> s;
    for(i=1;i<=n;i++){
        cin >> ara[i];
    }
    i = 0;
    j = n;
    while(i<=j){
        mid = (i+j)/2;
        vector <long long> x;
        for(l=1;l<=n;l++){
            x.push_back((mid*l)+ara[l]);
        }
        sort(x.begin(), x.end());
        ans = 0;
        for(l=0;l<mid;l++){
            ans+=x[l];
        }
        if(ans<=s){
            i = mid+1;
        }
        else{
            j = mid-1;
        }
    }
    c = 0;
    t = i;
    for(i=min(n, t+10); i>=max(c, t-10); i--){
        vector <long long> x;
        for(l=1;l<=n;l++){
            x.push_back((i*l)+ara[l]);
        }
        sort(x.begin(), x.end());
        ans = 0;
        for(l=0;l<i;l++){
            ans+=x[l];
        }
        if(ans<=s){
            cout << i <<" "<<ans;
            return 0;
        }
    }
    return 0;
}







