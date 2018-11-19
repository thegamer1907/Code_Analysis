#include <bits/stdc++.h>
using namespace std;

int n;
string password, s;
vector <string> a;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> password;
    cin >> n;
    while(n-- && cin >> s){
        if(s == password) return cout << "YES" << endl, 0;
        a.push_back(s);
    }
    for(int i = 0 ; i < a.size() ; i++)
        for(int j = 0 ; j < a.size() ; j++)
            if(a[i][1] == password[0] && a[j][0] == password[1])
                return cout << "YES" << endl, 0;
    cout << "NO" << endl;
    return 0;
}
