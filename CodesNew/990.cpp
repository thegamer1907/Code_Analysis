#include<iostream>
#include<set>

using namespace std;

set<string> st;

int main()
{
    ios_base::sync_with_stdio(0);
    int n, m;
    string s;
    cin >> n >> m;
    for(int i=0; i<n+m; i++){
        cin >> s;
        st.insert(s);   
    }
    int i = (n+m-st.size());
    if(n > m || (i%2 && m<=n)){
        cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
