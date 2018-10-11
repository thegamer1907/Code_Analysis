#include<bits/stdc++.h>

#define ll long long

using namespace std;

vector<ll> P(500);

set<ll> A, B, C;

void PCnt(){
    ll p= 1;
    for (int i= 0; i < 500; i++){
        P[i]= p;
        p*= (ll)29;
    }
}

bool f(){
    int ind= 0;
    while (!A.empty() && !B.empty()){
        if (!C.empty()){
            A.erase(*C.begin());
            B.erase(*C.begin());
            C.erase(C.begin());
            ind= 1 - ind;
        }else{
            if (ind){
                return !(B.size() > A.size());
            }else{
                return A.size() > B.size();
            }
        }
    }
    if (!ind){
        return !A.empty();
    }else{
        return B.empty();
    }
}

int main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    PCnt();

    int n, m;
    cin >> n >> m;
    for (int i= 0; i < n; i++){
        string s;
        cin >> s;
        ll h= 0;
        for (int j= 0; j < s.size(); j++){
            h+= P[j] * (s[j] - 'a' + 1);
        }
        A.insert(h);
    }
    for (int i= 0; i < m; i++){
        string s;
        cin >> s;
        ll h= 0;
        for (int j= 0; j < s.size(); j++){
            h+= P[j] * (s[j] - 'a' + 1);
        }
        B.insert(h);
        if (A.find(h) != A.end()){
            C.insert(h);
        }
    }

    if (f()){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}