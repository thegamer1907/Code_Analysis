#include <bits/stdc++.h>
using namespace std;

int main()
{
    int p, e;
    cin >> p >> e;
    string s;
    set <string> st;
    for(int i = 0; i < p+e; i++){
        cin >> s;
        st.insert(s);
    }
    int sz = st.size();

    if(p > e || ((p == e) && (sz % 2 == 1))) cout << "YES" << endl;
    else cout << "NO" << endl;
}