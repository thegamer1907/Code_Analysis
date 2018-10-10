#include <bits/stdc++.h>

using namespace std;

#define ll long long

const int N = 1e6 + 5;
char s[N];
int pref[N];

int main(){
    cin >> s + 1;
    int n = strlen(s + 1);
    int q = 0;
    for(int i = 2;i <= n;i++){
        while(q > 0 && s[q + 1] != s[i]){
            q = pref[q];
        }
        if(s[q + 1] == s[i]){
            q++;
        }
        pref[i] = q;
    }
    q = n;
    vector <int> all;
    while(pref[q]){
        all.emplace_back(pref[q]);
        q = pref[q];
    }
    sort(all.begin(), all.end());
    int lf = 0;
    int rg = all.size() - 1;
    int md, sol;
    sol = -1;
    while(lf <= rg){
        md = (lf + rg) >> 1;
        int l = all[md];
        bool ok = false;
        for(int i = l + 1;i < n;i++){
            if(pref[i] == l){
                ok = true;
                break;
            }
        }
        if(ok){
            sol = md;
            lf = md + 1;
        }else{
            rg = md - 1;
        }
    }
    if(sol == -1){
        cout << "Just a legend";
    }else{
        sol = all[sol];
        for(int i = 0;i < sol;i++){
            cout << s[i + 1];
        }
    }
	return 0;
}
