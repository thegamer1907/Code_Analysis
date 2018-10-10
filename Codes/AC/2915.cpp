#include <bits/stdc++.h>

using namespace std;
bool st[1000006];

int main()
{
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
    int n;
    string t;
    cin >> t;
//    for(int i = 1;i < 1e6-1;i++)t += 'a';
//    t += 'a';
    n = t.size();
    int b[n+1];
    memset(b, 0, sizeof(b));
    b[0] = -1;
    int i = 0, j = -1;
    while(i < n){
        while(j >= 0 && t[i] != t[j])j = b[j];
        i++, j++;
        b[i] = j;
    }
    j = b[n];
    while(j > 0){
        st[j] = 1;
        j = b[j];

    }
    int mx = 0;
    for(int i = n-1;i >= 1;i--){
        int q = b[i];
        if(st[q]){
            mx = max(mx, q);
        }
        q = b[q];
    }
    if(mx)
        cout << t.substr(0, mx);
    else
        cout << "Just a legend";
}
