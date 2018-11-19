#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    char a = s[0];
    char b = s[1];
    int n;
    string d;
    vector < string > docs;

    cin >> n;
    bool check = 0;

    for(int i = 0 ; i<n ; i++) {
        cin >> d;
        if(d == s) check = 1;
        docs.push_back(d);
    }

    if(check) {
        cout << "YES" << endl;
        exit(0);
    }

    for(int i = 0 ; i<n ; i++) {

        for(int j = 0 ; j<n ; j++) {

            if(docs[i][1] == a and b ==  docs[j][0]) {
                return cout << "YES" , 0;
            }

        }
    }

    cout << "NO" << endl;
}
