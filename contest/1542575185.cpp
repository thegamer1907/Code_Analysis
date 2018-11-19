#include<bits/stdc++.h>
#define ll long long
#define mp make_pair
#define fi first
#define se second
#define pb push_back
using namespace std;
ll h, m , s, t1, t2, i;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >>h>>m>>s>>t1>>t2;
    if (t1 > t2)swap(t1, t2);
    bool o = 1;
    if (h >= t1 && h < t2)o = 0;

    i = t1 * 5;
    if (i == 60)i =0;
    while (i != (t2 * 5) % 60){
        if (i == m || i == s){o = 0;break;}
        i++;
        if (i >= 60)i = 0;
    }

    if (o == 1)return
         cout <<"YES",0;

    //cout <<1<<endl;
    o = 1;
    i = t2;
    while (i != t1){
        if (i == h){o = 0;break;}
        i++;
        if (i > 12)i = 1;
    }

    i = t2 * 5;
    if (i == 60)i = 0;
    while (i != (t1 * 5) % 60){
        //cout <<i<<" "<<t2*5<<" "<<t1*5<<endl;
        //cout <<i<<" "<<m<<" "<<s<<endl;
        if (i == m || i == s){o = 0;break;}
        i++;
        if (i >= 60)i = 0;
    }
    if (o == 1)return cout <<"YES",0;

    cout <<"NO";
}

// 3 10 4 1 11
