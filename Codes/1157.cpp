#include<bits/stdc++.h>

#define ll long long

using namespace std;

set<string> A, B, C;

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

    int n, m;
    cin >> n >> m;
    for (int i= 0; i < n; i++){
        string s;
        cin >> s;
        A.insert(s);
    }
    for (int i= 0; i < m; i++){
        string s;
        cin >> s;
        B.insert(s);
        if (A.find(s) != A.end()){
            C.insert(s);
        }
    }

    if (f()){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}