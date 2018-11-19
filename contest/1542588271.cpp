#include <bits/stdc++.h>
using namespace std;

int main()
{
    //while(1) {
    string pass;
    cin >> pass;
    int n;
    cin >> n;
    string str[n];
    vector<string> v;
    for(int i=0; i<n; i++) {
        cin >> str[i];
        //string temp(1, str[i][1]);
        //temp += str[i][0];
        //v.push_back(temp);
    }

    for(int i=0; i<n; i++) {
        v.push_back(str[i]);
        for(int j=0; j<n; j++) {
            string temp(1, str[i][1]);
            temp += str[j][0];
            v.push_back(temp);
        }
    }

    if(find(v.begin(), v.end(), pass) != v.end()) {
        printf("YES\n");
    }
    else {
        printf("NO\n");
    }
    //}
    return 0;
}
