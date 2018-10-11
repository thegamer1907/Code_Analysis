#include <bits/stdc++.h>
using namespace std;
long long nb,ns,nc,pb,ps,pc,l,r=10000000000000,d,a[3];
string st;
int main(){
    cin>>st>>nb>>ns>>nc>>pb>>ps>>pc>>d;
    for(auto i:st){
        if(i=='B'){
            ++a[0];
        }else if(i=='C'){
            ++a[1];
        }else{
            ++a[2];
        }
    }
    while(l + 1 < r){
        long long m = l + r >> 1;
        long long cnt = 0;
        if(m * a[0] > nb){
            cnt += (m * a[0] - nb) * pb;
        }
        if(m * a[2] > ns){
            cnt += (m * a[2] - ns) * ps;
        }
        if(m * a[1] > nc){
            cnt += (m * a[1] - nc) * pc;
        }
        if(cnt > d){
            r = m - 1;
        }else if(cnt <= d){
            l = m;
        }
    }
    long long cnt = 0;
    if(r * a[0] > nb){
        cnt += (r * a[0] - nb) * pb;
    }
    if(r * a[2] > ns){
        cnt += (r * a[2] - ns) * ps;
    }
    if(r * a[1] > nc){
        cnt += (r * a[1] - nc) * pc;
    }
    if(cnt <= d){
        cout<<r;
    }else{
        cout<<l;
    }
}