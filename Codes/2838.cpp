#include <bits/stdc++.h>

using namespace std;

vector<int> z_function(string str)
{
    int n = (int)str.length();
    vector<int> z(n);
    int l = 0, r = 0;
    z[0] = 0;

    for(int i=1; i<n; i++){
        if(i<=r) z[i] = min(r-i+1, z[i-l]);
        while(i+z[i]<n && str[z[i]] == str[i+z[i]]) ++z[i];

        if(i+z[i]-1>r){
            l = i;
            r = i+z[i]-1;
        }
    }
    return z;
}

int main()
{
    string str;
    cin >> str;
    int n = str.length();
    string temp = str;
    temp.erase(temp.begin());
    temp.erase(temp.begin()+temp.length()-1);
    str = str + "#";
    str = str + temp;
    vector<int> V = z_function(str);
    int maxs = 0;
    for(int i=n+1; i<str.length(); i++){
        maxs = max(maxs, V[i]);
    }
    int ans = 0;
    for(int i=1; i<n; i++){
        if(i+V[i] == n){
            if(V[i] <= maxs) ans = max(ans, V[i]);
        }
    }
    if(ans) for(int i=0; i<ans; i++) cout << str[i];
    else cout << "Just a legend";
}
