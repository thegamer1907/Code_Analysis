// In the name of Allah the Lord of the Worlds.

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int n , m;
    cin >> n >> m;

    vector<int>v;

    for(int i=0;i<n;i++){

        int in;
        cin >> in;
        v.push_back(in);
    }

    sort(v.begin() , v.end());

    int ans1 = 0 , ans2 = v[n-1]+m;

    for(int i=0;i<m;i++){

        v[0]++;
        sort(v.begin() , v.end());
    }

    cout << v[n-1] << " " << ans2 << endl;

    return 0;
}
