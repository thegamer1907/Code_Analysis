#include <bits/stdc++.h>
#define ll long long
#define mp make_pair
#define PI 3.1415926535897932384626433832
#define MOD 1000000007
#define MOD2 1000000009
#define bas 29
#define bas2 19
using namespace std;
int main() {
    string s;
    cin>>s;
    int n ;
    cin>>n;
    bool is= false;
    vector<string> ss(n);
    for(int i = 0 ; i < n ; i++){
        cin>>ss[i];
        if(ss[i] == s){
            cout<<"YES";
            is = true;
        }
    }
    if(is)return 0;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            if(s[0] == ss[j][1] && s[1] == ss[i][0]){
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO";
}
