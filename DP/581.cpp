
#include<bits/stdc++.h>
using namespace std;
int main()
{


#ifndef ONLINE_JUDGE
    // for sgetting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    string s;
    cin >> s;
    int n = s.size(), t, l, r;
    cin >> t;
    std::vector<int> v(n + 1);
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == s[i + 1])
            v[i + 1] = 1;
        v[i + 1] += v[i];
        // cout << v[i] << " ";
    }
    while(t--) {
        cin>>l>>r;
        cout<<v[r-1]-v[l-1]<<endl;
    }


}


