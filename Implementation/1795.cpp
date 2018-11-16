#include <bits/stdc++.h>
using namespace std;

int main(){
    char s[105];
    cin>>s;
    cout<<((strstr(s,"0000000")||strstr(s,"1111111"))?"YES":"NO");
    return 0;
}