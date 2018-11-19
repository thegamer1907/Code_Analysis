#include <bits/stdc++.h>

#define MAX 100009
#define INF 99999999
#define in(a,b)  ( (b).find(a) != (b).end())
#define clr(a,b) memset((a), (b), sizeof((a)))
#define pb       push_back
#define all(a)   a.begin(), a.end()
#define mp       make_pair
#define ll	long long
#define FI	first
#define SE second

using namespace std;
int n;
string pass,s;
vector<string> tab;
bool f(string s){
    if( ((s).find(pass) != string::npos)){
        return true;
    }
    else{
        reverse(all(s));
        if( ((s).find(pass) != string::npos)){
            return true;
        }
    }
    return false;
}
int main() {
    
    cin >> pass >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        tab.pb(s);
    }
    if(n == 1 ){
        cout << (( f(tab[0]) )? "YES" : "NO");
        return 0;
    }
    for(int i=0; i<n; i++){
        if(f(tab[i])){
            cout << "YES" ; return 0;
        }
        for(int j=i+1; j<n; j++){
            if( ((tab[i]+tab[j]).find(pass) != string::npos) || ( (tab[j]+tab[i]).find(pass) != string::npos ) ){
                cout << "YES"; return 0;
            }
        }
    }
    cout << "NO";
    return 0;
}