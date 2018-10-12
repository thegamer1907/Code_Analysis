#include <bits/stdc++.h>
    using namespace std;

#define MAX 500203
#define ll long long

int n, m;
set<string> Set;
string S;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;

    for(int i=0; i<n; i++){
        cin >> S;
        Set.insert(S);
    }

    int k = 0;

    for(int i=0; i<m; i++){
        cin >> S;
        if(Set.find(S) != Set.end())
            k++;
    }

    if(n > m){
        cout << "YES\n";
    }
    else if(m > n){
        cout << "NO\n";
    }
    else if(k%2 == 0){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
    }

    return 0;
}
