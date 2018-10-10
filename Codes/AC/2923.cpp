///fixprefixsuffix

#include <bits/stdc++.h>

using namespace std;

int pref[1000001], post[3000001];

int avail[3000001];

void build_KMP(const string& s){
    int i = 0, j = 1;
    pref[0] = 0;
    for(int k = 1; k < s.length(); k++){
        if(s[j] == s[i]){
            pref[k] = i+1;
            i++;
            j++;
            continue;
        }
        while(i > 0 && s[i] != s[j]) i = pref[i-1];
        if(s[i] == s[k]){
            i++;
            j++;
            pref[k] = i;
        }
        else pref[k] = 0, j++;
    }
}

void Z_algo(const string& s, int len){
    int n = s.length(), z[n + 1], l = 0, r = 0;
    bool flag = 0;
    z[0] = 0;
    for(int j = 1; j < n; j++){
        if(s[j] == '$') flag = true;
        if(r < j){
            if(s[j] != s[0]){
                    z[j] = 0;
                l = 0; r = 0;
                continue;
            }
            r = j;
            l = 0;
            while(r < n && s[r] == s[l]) l++, r++;
            l--;
            r--;
            z[j] = l+1;
            l = j;
        }
        else{
            int mi = z[j-l];
            if((mi+j-1) >= n) mi = (n-1) - j + 1;
            if((mi+j-1) < r || (mi+j-1) == n-1) z[j] = mi;
            else{
                l = (r - j);
                while(r < n && s[r] == s[l]) l++, r++;
                l--;
                r--;
                z[j] = l+1;
                l = j;
            }
        }
        //cout << s[j] << " " << j << " --> " << z[j] << endl;
        if(flag) avail[z[j]]++;
    }
}

string s;

string solve(){
    int n = s.length();
    int st = pref[n - 1];
    while(st > 0){
        //cout << st << " ";
        if(post[st] > 1) break;
        st = pref[st - 1];
    }
    if(st){
        string ans = s.substr(0, st);
        return ans;
    }
    return "Just a legend";
}

/*void print(){
    for(int j = 0; j < s.length(); j++)
        cout << pref[j] << " ";
    cout << endl;
    for(int j = 0; j < s.length(); j++){
        cout << j << " --> ";
        for(int k = 0; k < avail[j].size(); k++)
            cout << avail[j][k] << " ";
        cout << endl;
    }
}*/

int main(){
    cin >> s;
    string temp = s + '$' + s;
    Z_algo(temp, s.length());
    build_KMP(s);
    //print();

    post[s.length()] = 0;
    for(int j = s.length() - 1; j >= 0; j--)
        post[j] = post[j+1] + avail[j];
    
    cout << solve() << endl;
    return 0;
}
