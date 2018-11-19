#include <bits/stdc++.h>
using namespace std;
#define x first
#define y second
#define endl '\n'
typedef long long int ll;
typedef pair<int, int> P;

int main(){
    //std::ios::sync_with_stdio(false);
	//cin.tie(0);
    int n;
    string s;
    string b[105];
    cin>>s>>n;
    for(int i=0;i<n;++i)
        cin>>b[i];
        
    bool v1 = false, v2 = false;
    for(int i=0;i<n;++i){
        if(b[i][0] == s[1]) v1 = true;
        if(b[i][1] == s[0]) v2 = true;
        if(b[i] == s){
            v1 = true;
            v2 = true;
        }
    }
    if(v1&&v2) cout << "yes\n";
    else cout << "no\n";
    return 0;
}