#include <bits/stdc++.h>
using namespace std;
int main(){
    int h,m,s,t,tt,nz=0,vr=0;
    cin >> h >> m >> s >> t >> tt;
int    mn=min(t,tt);
int    mx=max(t,tt);
    if(h>=mn && h<mx){
        nz++;
    }
    else
        vr++;

        mn*=5;
        mx*=5;
    if(m>=mn && m<mx){
        nz++;
    }
    else
        vr++;

        if(s>mn && s<mx){
        nz++;
    }
    else
        vr++;

       if(vr && nz){
        cout << "NO";
        return 0;
       }
       cout << "YES";
}
