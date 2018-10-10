/* Murad Eynizade */
#include <bits/stdc++.h>
#define FAST_READ ios::sync_with_stdio(0);cin.tie(0);
using namespace std;

int le , le2 , l , r;
string s;

int main() {
    FAST_READ;
    cin>>s;
    le = s.length();
    int z[le];
    memset(z,0,sizeof(z));
    l = 0 ,r = 0;
    for (int i =1;i<le;i++) {
        if (i <= r) z[i] = min(z[i - l] , r - i + 1);
        while (i + z[i] < le && s[z[i]] == s[i + z[i]])z[i]++;
        if (i + z[i] - 1 > r) {
            l = i;
            r = i + z[i] - 1;
        }
    }
    for (int i = 1;i<le;i++) {
        string pat;
        if (i + z[i] == le) {
            for (int j = i;j<le;j++) pat += s[j];
            string text = pat + '#' + s;
            le2 = text.length();
            int z2[le2];
            memset(z2,0,sizeof(z2));
            l = 0,r = 0;
            for (int j = 1;j<le2;j++) {
                if (j <= r)z2[j] = min(r - j + 1,z2[j - l]);
                while (j + z2[j] < le2 && text[z2[j]] == text[j + z2[j]])z2[j]++;
                if (j + z2[j] - 1 > r) {
                    l = j;
                    r = j + z2[j] - 1;
                }
            }
            for (int j = pat.length() + 2;j<le2;j++) {
                if (z2[j] == pat.length() && j + z2[j] != le2) {
                    cout<<pat<<endl;
                    return 0;
                }
            }
        }
    }
    cout<<"Just a legend"<<endl;
    return 0;
}
