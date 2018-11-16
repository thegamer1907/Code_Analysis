#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int cnt=0;
    for(int i=0; i<s.size()-1 && cnt<2; i++) {
        if((s[i]=='A') && (s[i+1]=='B')  && cnt==0) {
            cnt++;
            i++;
        }
        else if((s[i]=='B') && (s[i+1]=='A')  && cnt==1) {
            cnt++;
            i++;
        }
    }
    if(cnt<2) {
        cnt=0;
    }
    for(int i=0; i<s.size()-1 && cnt<2; i++) {
        if((s[i]=='B') && (s[i+1]=='A')  && cnt==0) {
            cnt++;
            i++;
        }
        else if((s[i]=='A') && (s[i+1]=='B')  && cnt==1) {
            cnt++;
            i++;
        }
    }
    if(cnt==2) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}

