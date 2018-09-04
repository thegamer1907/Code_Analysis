#include <bits/stdc++.h>

using namespace std;

vector<int> prefixFunction(string s)
{
    vector<int> pi(s.size());
    int j = 0;
    pi[0] = 0;
    for(int i=1; i<s.size(); i++){
        while(j > 0 && s[i] != s[j]){
            j = pi[j-1];
        }
        if(s[i] == s[j]) j++;
        pi[i] = j;
    }
    return pi;
}

int main()
{
    string str;
    cin >> str;
    vector<int> pi = prefixFunction(str);
    int len = str.size();
    if(pi[len-1] == 0) cout << "Just a legend";
    else {
        int k = pi[len-1];
        bool flag = true;
        for(int i=0; i<len-1; i++){
            if(pi[i] == k) flag = false;
        }
        if(flag == false){
            for(int i=0; i<k; i++) cout << str[i];
        }
        else {
            k = pi[k-1];
            if(k == 0) cout << "Just a legend";
            else {
                for(int i=0; i<k; i++) cout << str[i];
            }
        }
    }
}
