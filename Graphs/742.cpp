#include <bits/stdc++.h>

using namespace std;

int main() {

    int i,n,t;

    string s;

    cin>>n>>t;

    cin>>s;

    for (i=0;i<t;i++) {

        for (int j=0;j<n;j++) {

            if (s[j]=='B' && s[j+1]=='G') {
                s[j]  = 'G';
                s[j+1]= 'B';
                j++;
            }

            /*
            char ch;

            ch = s[j];
            s[j] = s[j+1];
            s[j+1] = ch;
            */
        }
    }

    cout<<s<<endl;

    return 0;
}

/// 6 2
/// BBGBBG
//  BGBBGB
/// GBBGBB

