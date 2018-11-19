#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, k;
    cin>>n>>k;
    unordered_set<bitset<4> > maskset;
    for (int i=0; i<n; i++) {
        bitset<4> b;
        for (int j = 0; j < k; j++) {
            bool f;
            cin>>f;
            b[j] = f;
        }
        maskset.insert(b);
    }
    vector<bitset<4> > mask;
    for (auto x : maskset)
        mask.push_back(x);
    for (int rmask=1; rmask< (1<<mask.size()); rmask++) {
        bitset<16> bmask(rmask);
        vector<int> sum(k,0);
        for (int i=0; i<mask.size(); i++) {
            if (bmask[i])
                for (int j=0; j<k; j++) {
                    sum[j]+=(int)(mask[i][j]);
                }
        }
        bool ok = true;
        for (int i=0; i<k; i++) {
            if (sum[i]>bmask.count()/2)
                ok=false;
        }
        if (ok) {
            cout<<"YES";
            exit(0);
        }
    }
    cout<<"NO";
}