#include <bits/stdc++.h>
using namespace std;
int h,m,s,t1,t2,pos_h,pos_m,pos_s;
inline bool check(int p1, int p2, int pos_h, int pos_m, int pos_s){
    if (p2<p1){
        p2+=24;
        if (pos_h<p1) pos_h+=24;
        if (pos_m<p1) pos_m+=24;
        if (pos_s<p1) pos_s+=24;
    }
    if (pos_h<=p2&&pos_h>=p1) return 0;
    if (pos_m<=p2&&pos_m>=p1) return 0;
    if (pos_s<=p2&&pos_s>=p1) return 0;
    return 1;
}
int main(){
    cin>>h>>m>>s>>t1>>t2;
    pos_h=h*2;
    if (m>0||s>0) pos_h++;
    pos_h%=24;
    pos_m=m/5*2;
    if (m%5>0||s>0) pos_m++;
    pos_m%=24;
    pos_s=s/5*2;
    if (s%5>0) pos_s++;
    pos_s%=24;
    t1=t1*2%24; t2=t2*2%24;
    if (check(t1,t2,pos_h,pos_m,pos_s)||check(t2,t1,pos_h,pos_m,pos_s)) cout<<"YES"; else cout<<"NO";
}
