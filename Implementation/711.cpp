#include<bits/stdc++.h>
using namespace std;

const int INF = 0x3f3f3f3f;

int n, t;
string s;

int main(){
    scanf("%d %d", &n, &t);
    cin >> s;

    for(int i = 0; i < t; i++){
        for(int j = 0; j + 1 < n; j++){
            if(s[j] == 'B' and s[j+1] == 'G') { swap(s[j], s[j+1]); j++; }
        }
    }

    cout << s << endl;

    return 0;
}