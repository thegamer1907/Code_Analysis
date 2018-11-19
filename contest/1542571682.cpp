#include<bits/stdc++.h>
using namespace std;
#define ll 2222222222222222222222
int h, m, s, t,i, tt, a, b, c, d, f,abss, arr[87000], pp;
main(){
    cin >> h >> m >> s >> t >> tt;
    abss = 43200;
    a = h*3600+m*60+s;
    a = a % abss;
    arr[a]=1;
    b = m*60+s;
    b =b * 12;
    b =b %abss;
    arr[b]=1;
    arr[s*720]=1;
    t = t * 3600;
    t =t %abss;
    tt = tt*3600;
    tt = tt%abss;
    i = t+1;
    while(pp<50000){
        i = i%abss;
        if (i==tt){cout<<"YES"; return 0;}
        if (arr[i]==1) break;
        ++i;
        ++pp;
    }
     i = t-1;
     pp = 0;
    while(pp<50000){
        i = (i+43200)%abss;
        if (i==tt){cout<<"YES"; return 0;}
        if (arr[i]==1) { break;}
        --i;
        ++pp;
    }
    cout<<"NO";

}

