#include <bits/stdc++.h>
using namespace std;
int a[20];
int b[20], c[5];
int main() {
    int n,k,i,t,d;
cin>>n>>k;
    for(i=0;i<n;i++)
    {
        t=0;
        for(int j=0;j<k;j++)
        {
            cin>>d;
            t=2*t+d;
        }
        a[t]=1;
    }
    int tot=0;
    for(i=0;i<16;i++)
    {
        if(a[i]==1) {
            b[tot++]=i;
            //cout << i << endl;
        }
    }
    for(i=1;i<(1<<tot);i++)
    {
        for(int j = 0; j < k; j++) c[j] = 0;
        int cnt = 0;
        for(int j = 0; j< tot; j++) {
            if(!((i >> j) & 1)) continue;
            cnt++;
            for(int w = 0; w < k; w++) {
                if((b[j] >> w) & 1) c[w]++;
            }
        }
        bool ok = true;
        for(int j = 0; j < 4; j++) if(c[j] > cnt / 2) ok = false;
        if(ok) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    
    return 0;
}