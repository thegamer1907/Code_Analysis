#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m,m_nuevo;
    string s;
    cin >> n >> m;
    float repetidas=0.0;
    unordered_set<string> poland;
    for(int i = 0; i < n; i++){
        cin >> s;
        poland.insert(s);
    }
    for(int i = 0; i < m; i++){
        cin >> s;
        if(poland.count(s))
            repetidas++;
    }
    m -= ceil(repetidas/2);
    n -= floor(repetidas/2);
    //cout << n << " " << m << endl;
    if(n > m)
        cout << "YES\n";
    else
    {
        cout << "NO\n";
    }
    return 0;
}