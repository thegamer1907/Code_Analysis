#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e6 + 6;
int z[MAX];
string s;
int main()
{
    ios_base::sync_with_stdio(false);
    cin >> s;
    int n = s.size();
    int l = 0, r = 0;
    for(int i = 1; i < n; i++){
        if(i <= r)
            z[i] = min(z[i - l], r - i + 1);
        while(i + z[i] < n && s[z[i]] == s[i + z[i]])
            z[i]++;
        if(i + z[i] - 1 > r)
            l = i, r = i + z[i] - 1;
    }
    int maxZiseen = 0;
    for(int i = 1; i < n; i++){
        if(i + z[i] == n && maxZiseen >= z[i]){
            cout << s.substr(0, z[i]) << endl;
            return 0;
        }
        maxZiseen = max(maxZiseen, z[i]);
    }
    cout << "Just a legend" << endl;
    return 0;
}