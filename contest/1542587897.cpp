#include <bits/stdc++.h>

using namespace std;

void timo() {
  ios::sync_with_stdio(0);
  ios_base::sync_with_stdio(0);
  cin.tie(0), cout.tie(0);
}
int main()
{
    timo();

    int n,y = 0;string s,s1;vector <string> v;
    cin >> s >> n;
    for(int i = 0; i< n; i++){
        cin >> s1;v.push_back(s1);
        if(s1 == s)
            y++;
    }
    if(y){
        cout << "YES" << endl;return 0;
    }
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v.size(); j++){
            if(v[i][1] == s[0] && v[j][0] == s[1]){
                cout << "YES" << endl;return 0;
            }
        }
    }
    cout << "NO"  << endl;
    return 0;
}
