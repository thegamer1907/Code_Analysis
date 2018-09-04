#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long int lli;
lli INF = 10000000000000;
lli cntb=0,cnts=0,cntc=0;
lli b,s,c,cb,cs,cc,paise;
lli func(lli no){
        lli x = no*cntb;
        lli y = no*cnts;
        lli z = no*cntc;
        x = x<b?0:x-b;
        y = y<s?0:y-s;
        z = z<c?0:z-c;
        return x*cb+y*cs+z*cc;
}
int main(){
    ios::sync_with_stdio(false);
    string st;
    cin >> st;
    for(lli i=0;i<st.size();i++){
        if(st[i]=='B') cntb++;
        else if(st[i]=='S') cnts++;
        else cntc++;
    }
    cin >> b >> s >> c;
    cin >> cb >> cs >> cc;
    cin >> paise;
    lli l = 0;
    lli r = 10000000000000;
    lli ans = 0;
    while(l<=r){
        lli mid = (l+r)/2;
        lli cost = func(mid);
        if(cost==paise){
            ans = mid;
            break;
        }
        if(cost<paise){
            l = mid+1;
            ans = mid;
        }
        else{
            r = mid-1;
        }
    }
    cout << ans;
    return 0;
}