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

string star[200000], str, str1, str2;
long long ara[1000005], ara2[100005];
vector < pair <long long, long long> > ab;
vector <long long> x, y;
map <long long, long long > dat;
map <long long, long long > dat2;

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, e, v;
    cin >> n >> k;
    for(i=0;i<n;i++){
        cin >> ara[i];
    }
    if(k==1){
        ans = 0;
        for(i=0;i<n;i++){
            if(dat[ara[i]]>=2) ans += (dat[ara[i]]*(dat[ara[i]]-1))/2;
            dat[ara[i]]++;
        }
        cout << ans;
        return 0;
    }
    ans = 0;
    dat[ara[0]] += 1;
    if(ara[1]%k==0){
        a = dat2[ara[1]];
        dat2[ara[1]] = a + dat[ara[1]/k];
    }
    dat[ara[1]] += 1;
    for(i=2;i<n;i++){
        if(ara[i]%k==0){
            temp = ara[i]/k;
            if(temp%k==0){
                b = dat2[temp];
                ans+=b;
            }
            a = dat2[ara[i]];
            dat2[ara[i]] = a + dat[ara[i]/k];
        }
        dat[ara[i]]++;
    }
    cout << ans ;
    return 0;
}













