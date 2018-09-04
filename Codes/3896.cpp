//.cpp
#include <bits/stdc++.h>

using namespace std;

void out() {
    cout<<"\n";
    exit(0);
}

const int N = 2e5+9;
            
long long l, r, b, c, s, nb, nc, ns, pb, ps, pc, R, m;
string st;

int main() {
    ios::sync_with_stdio(false);
    cin>>st;
    for(auto ch : st)
        if(ch=='B') 
            b++; 
        else
        if(ch=='S') 
            s++; 
        else
            c++;
    
    cin>>nb>>ns>>nc;
    cin>>pb>>ps>>pc;
    cin>>R;
    
    l = 0;
    r = 2e12;
    
    while(l+1<r) {
        m = (l+r)/2;
        if(R >= max(m*b-nb, 0ll)*pb + max(m*s-ns, 0ll)*ps + max(m*c-nc, 0ll)*pc)
            l = m;
        else
            r = m;
    }
    
    cout<<l<<endl;
    return 0;
}