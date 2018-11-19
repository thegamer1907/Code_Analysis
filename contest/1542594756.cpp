#include <bits/stdc++.h>

using namespace std;

string target;
int n;
string str[102];

bool ta, tb;

int main(){
    cin >> target;
    cin >> n;
    for(int i=1; i<=n; i++){
        cin >> str[i];
        if(str[i] == target) ta = tb = true;
        if(str[i][1] == target[0]) ta = true;
        if(str[i][0] == target[1]) tb = true;
    }
    printf("%s", ta&&tb?"YES":"NO");
}
