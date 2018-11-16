#include<bits/stdc++.h>
using namespace std;

//DEF'S***************************************************

#define FOR(a,b,c) for (int i = a; i <= b; i+=c)
#define RFOR(a,b,c) for (int i = a; i >=b; i-=c)

typedef string str;
typedef long long ll;
typedef unsigned long long ull;

//FUNCTIONS**********************************************

void check ()
{
    cout << 1;
}

//MAIN****************************************************

main() {
    int a,b;
    cin >> a >> b;
    str s,s1;
    cin >> s;
    s1 = s;
    if (a == 1) {cout << s; return 0;}
    FOR(1,b,1){
        FOR(0,s.size()-2,1){
            if (s[i]=='B'&&s[i+1]=='G'){
                s1[i] = 'G';
                s1[i+1] = 'B';
            }
        }
        s = s1;
    }
    cout << s;
}
