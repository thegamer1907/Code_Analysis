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
long long ara[1000005], ara2[1000005], ara3[200005];
vector < pair <long long, long long> > ab;
vector <long long> x;
vector <long long> y;

long long prefix(){
    long long i, j, a, n, ans;
    ara[0] = ara2[0] = 0;
    n = str.length();
    for(i=1;i<n;i++){
        j = ara[i-1];
        while(j>0&&str[i]!=str[j]) j = ara[j-1];
        if(str[i]==str[j]) j++;
        ara[i] = j;
        ara2[i] = 0;
    }
    a = ara[n-1];
    while(a>0){
        ara2[a] = 1;
        a = ara[a-1];
    }
    ans = -1;
    for(i=1;i<n-1;i++){
        a = ara[i];
        if(ara2[a]){
            ans = max(ans, a);
        }
    }
    return ans;
}

int main() {
    //freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int n, ans, temp, t, j, i, m, h, h2, m2, c, a, b, mx, d, k, l, f;
    cin >> str;
    a = prefix();
    n = str.length();
    if(a==-1){
        cout << "Just a legend";
        return 0;
    }
    for(i=0;i<a;i++){
        str1+=str[i];
    }
    cout << str1;
    return 0;
}







