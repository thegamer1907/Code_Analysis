/**Bismillahir Rahmanir Rahim//fold  */
#include <bits/stdc++.h>
using namespace std;
#define inf 1000000007
#define llinf 1000000000000000000LL
#define bug(args ...) { string s = #args; istringstream iss(s); cout<<__LINE__<<": ", err(iss, args), cout << '\n'; }
void err(istringstream &iss) {}
template<typename T, typename ... Args> void err(istringstream &iss, const T &varVal, const Args & ... args) {
    string varName; iss >> varName; if (varName.back()==',') varName.back() = ' ';
    cout << varName << " = " << varVal << "; ", err(iss, args ...);
}
typedef long long int ll; typedef unsigned long long int ull;   // typedef long double ld;
int n, m, T, Q, sz, len, cn = 0, K;//end
#define MAXN 1000005

char str[MAXN], ptrn[MAXN];
int lstr, lptrn, lpps[MAXN]; // lpps is length of longest proper prefix which is suffix too

void prefix() {
    for (int i = 1, i2 = 0; i < lptrn; ) {
        if (ptrn[i]==ptrn[i2]) lpps[i++] = ++i2;
        else {
            if (i2!=0) i2 = lpps[i2-1];
            else lpps[i++] = 0;
        }
    }
}

bool kmp() {
    int i2 = 0;
    for (int i = 0; i<lstr && i2<lptrn; ) {
        if (str[i]==ptrn[i2]) ++i, ++i2;
        else {
            if (i2!=0) i2 = lpps[i2-1];
            else i++;
        }
    }
    return i2==lptrn;
}

int main() {
    cin.tie(NULL);
    cout.tie(NULL);

// got tle without knowing kmp, solved seeing editorial
    scanf("%s", ptrn);
    lptrn = static_cast<int> (strlen(ptrn));
    prefix();
    if (!lpps[lptrn-1]) {
        printf("Just a legend\n");
        return 0;
    }
    for (int i = 0; i < lptrn-1; i++) {//bug(lpps[i], i)
        if (lpps[i]==lpps[lptrn-1]) {
            for (int j = 0; j < lpps[lptrn-1]; j++) {
                printf("%c", ptrn[j]);
            }
            printf("\n");
            return 0;
        }
    }
    if (!lpps[lpps[lptrn-1]-1]) {
        printf("Just a legend\n");
    } else {
        for (int j = 0; j < lpps[lpps[lptrn-1]-1]; j++) {
            printf("%c", ptrn[j]);
        }
        printf("\n");
        return 0;
    }

    return 0;
}