#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>
//using namespace __gnu_pbds;
#define ll long long int
#define fast ios::sync_with_stdio(false);cin.tie(0); cout.tie(0)
#define clock_start       clock_t begin = clock();
#define clock_end         clock_t end = clock(); double time_spent = (double)(end - begin) / CLOCKS_PER_SEC; cout << time_spent << endl;
#define PI 3.14159265358979323846264338327950288419716939937510
using namespace std;
vector< string > st;
string s;
ll n;
int main(){
    cin >> s >> n;
    for(ll i = 1; i <= n; i ++){
        string x; cin >> x;
        st.push_back(x);
    }
    for(ll i = 0; i < st.size(); i ++){
        for(ll j = 0; j < st.size(); j ++){
            //if(i == j) continue;
            string temp = st[i];
            temp += st[j];
            if(temp.find(s) != string::npos){
                cout << "YES" << endl;
                return 0;
            }
        }
    }
    
    cout << "NO" << endl;
    return 0;
}