#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    int ha, ma, sa, t1a, t2a;
    ha = (h*5)%60;
    ma = m%60;
    sa = s%60;
    t1a = (t1*5)%60;
    t2a = (t2*5)%60;
    vector<int> v;
    v.push_back(ha);
    v.push_back(ma);
    v.push_back(sa);
    v.push_back(t1a);
    v.push_back(t2a);
    sort(v.begin(), v.end());
    for (int i=0; i<5; i++)
        v.push_back(v[i]);
    for (int i=0; i<5; i++)
        v.push_back(v[i]);
    int pos=0;
    while (v[pos]!=t1a)
        pos++;
    if (v[pos+1]==t2a) {
        cout<<"YES";
        exit(0);
    }
    while (v[pos]!=t2a)
        pos++;
    if (v[pos+1]==t1a) {
        cout<<"YES";
        exit(0);
    }
    cout<<"NO";
}