#include<iostream>
#include<vector>

using namespace std;

void kmpt(string &s, vector<int> &p) {
    p[0]=-1;
    for(int i = 0; i<s.size(); i++) {
        int b = p[i];
        while(b>=0 && s[i] != s[b]) {
            b=p[b];
        }
        p[i+1]=b+1;
    }
}


int main() {
    string s;
    cin >> s;
    int n = s.size();
    vector<int> p(s.size()+1);
    kmpt(s,p);
    int found=0;
    int b = p.back();
    while(b>0) {
        for(int i = 0; i<n; i++)
            if(p[i]==b) found = b;
        if(found) break;
        b=p[b];
    }

    if(!found) { cout << "Just a legend\n"; return 0; }
    else cout << s.substr(0,found) << "\n";
}
